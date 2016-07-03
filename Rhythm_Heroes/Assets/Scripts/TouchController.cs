using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class TouchController : MonoBehaviour {
	Camera myCamera;
	public LayerMask touchInputMask;
	private List<GameObject> touchList = new List<GameObject> ();
	private GameObject[] touchesOld;
	private RaycastHit hit;
	private int comboBonus;

	private GameObject[] planeObj = new GameObject[5], touchObj = new GameObject[5];
	private GameObject note, particleSysObj;
	private ParticleSystem ps;
	private GameObject scoreTextObj, wordTextObj;
	private int channelNum;

	public static int comboCount = 0;
	public static bool hasChanged = false;
	public static bool getScore = false;

	void Start () {
		channelNum = PlaneController.channelNum;
		myCamera = GetComponent<Camera>();
		planeObj = new GameObject[channelNum];
		for(int i=0; i<channelNum; i++) {
			planeObj [i] = GameObject.Find ("Plane" + i);
			touchObj [i] = GameObject.Find ("TouchZone" + i);
		}
		note = GameObject.Find ("Note2");
		scoreTextObj = GameObject.Find ("Score");
		wordTextObj = GameObject.Find ("Word");
		particleSysObj = GameObject.Find ("ring3");
		ps = particleSysObj.GetComponent<ParticleSystem> ();
		comboBonus = PlaneController.comboBonus;
		note.SendMessage ("changeMaterial", false, SendMessageOptions.RequireReceiver);
	}

	void Update () {
		#if UNITY_EDITOR
		if(Input.GetMouseButton(0) || Input.GetMouseButtonDown(0) || Input.GetMouseButtonUp(0)) {
			touchesOld = new GameObject[touchList.Count];
			touchList.CopyTo (touchesOld);
			touchList.Clear ();

			Ray ray = myCamera.ScreenPointToRay (Input.mousePosition);

			if(Physics.Raycast(ray, out hit, touchInputMask)) {
				int choose = 0;
				GameObject recepient = hit.transform.gameObject;
				touchList.Add (recepient);

				if(recepient.name == "TouchZone0") {
					choose = 0;
				} else if(recepient.name == "TouchZone1") {
					choose = 1;
				} else if(recepient.name == "TouchZone2") {
					choose = 2;
				} else if(recepient.name == "TouchZone3"){
					choose = 3;
				} else {
					choose = 4;
				}

				int[] count = new int[channelNum];
				if(Input.GetMouseButtonDown(0)) {
					recepient.SendMessage ("onTouchDown", hit.point, SendMessageOptions.DontRequireReceiver);
					planeObj[choose].SendMessage ("onTouchDown", hit.point, SendMessageOptions.DontRequireReceiver);
					if(PlaneController.blocksInChannel[choose].Count > 0) {
						lock(PlaneController.mutex) {
							foreach(BlockWrapper tmpBlockWrapper in PlaneController.blocksInChannel[choose]) {
								// get each block's current position
								float tmpPos = planeObj[choose].transform.InverseTransformPoint (
									tmpBlockWrapper.blockObj.transform.position).z;

								// get score
								if(tmpPos <= PlaneController.touchZoneLocalMin && 
									tmpPos >= PlaneController.endingPointLocalMin) {

									PlaneController.blocksInPool[choose].Enqueue(tmpBlockWrapper);
									count[choose]++;
									tmpBlockWrapper.blockObj.transform.position = new Vector3 (100, 0, 0);

									scoreTextObj.SendMessage ("statChange", 2, SendMessageOptions.RequireReceiver);
									scoreTextObj.SendMessage("comboChange", 1, SendMessageOptions.RequireReceiver);
									wordTextObj.SendMessage("wordTextDisplay", 1, SendMessageOptions.RequireReceiver);
									scoreTextObj.SendMessage("scorePlus", SendMessageOptions.RequireReceiver);

									ps.transform.position = hit.point;
									ps.Play();

									comboCount++;
									if(comboCount >= comboBonus && !hasChanged) {
										hasChanged = true;
										PlaneMaterialController.isHot = true;
										TouchZoneMaterialController.isHot = true;
										for(int i=0; i<channelNum; i++) {
											planeObj[i].SendMessage("changeMaterial", true, SendMessageOptions.RequireReceiver);
											touchObj[i].SendMessage("changeMaterial", true, SendMessageOptions.RequireReceiver);
										}
										note.SendMessage("changeMaterial", true, SendMessageOptions.RequireReceiver);
									}
								}
							}

							while(count[choose]-- > 0) {
								PlaneController.blocksInChannel[choose].Dequeue();
							}
						}
					}
				}

				if(Input.GetMouseButtonUp(0)) {
					recepient.SendMessage ("onTouchUp", hit.point, SendMessageOptions.DontRequireReceiver);
					planeObj[choose].SendMessage ("onTouchUp", hit.point, SendMessageOptions.DontRequireReceiver);
				}

				if(Input.GetMouseButton(0)) {
					recepient.SendMessage ("onTouchStay", hit.point, SendMessageOptions.DontRequireReceiver);
					planeObj[choose].SendMessage ("onTouchStay", hit.point, SendMessageOptions.DontRequireReceiver);
				}
			}


			foreach(GameObject g in touchesOld) {
				if(!touchList.Contains(g)) {
					g.SendMessage ("onTouchExit", hit.point, SendMessageOptions.DontRequireReceiver);
				}
			}
		}
			  

		#endif


		#if UNITY_IPHONE
		if(Input.touchCount > 0) {
			touchesOld = new GameObject[touchList.Count];
			touchList.CopyTo (touchesOld);
			touchList.Clear ();

			foreach(Touch touch in Input.touches) {
				Ray ray = myCamera.ScreenPointToRay (touch.position);

				if(Physics.Raycast(ray, out hit, touchInputMask)) {
					int choose = 0;
					GameObject recepient = hit.transform.gameObject;
					touchList.Add (recepient);

					if(recepient.name == "TouchZone" + "0") {
						choose = 0;
					} else if(recepient.name == "TouchZone1") {
						choose = 1;
					} else if(recepient.name == "TouchZone2") {
						choose = 2;
					} else if(recepient.name == "TouchZone3") {
						choose = 3;
					} else {
						choose = 4;
					}

					int[] count = new int[channelNum];
					if(touch.phase == TouchPhase.Began) {
						recepient.SendMessage ("onTouchDown", hit.point, SendMessageOptions.DontRequireReceiver);
						planeObj[choose].SendMessage ("onTouchDown", hit.point, SendMessageOptions.DontRequireReceiver);

						if(PlaneController.blocksInChannel[choose].Count > 0) {
							lock(PlaneController.mutex) {
								foreach(BlockWrapper tmpBlockWrapper in PlaneController.blocksInChannel[choose]) {
									// get each block's current position
									float tmpPos = planeObj[choose].transform.InverseTransformPoint (
										tmpBlockWrapper.blockObj.transform.position).z;

									// get score
									if(tmpPos <= PlaneController.touchZoneLocalMin && 
										tmpPos >= PlaneController.endingPointLocalMin) {

										PlaneController.blocksInPool[choose].Enqueue(tmpBlockWrapper);
										count[choose]++;
										tmpBlockWrapper.blockObj.transform.position = new Vector3 (100, 0, 0);

										scoreTextObj.SendMessage ("statChange", 2, SendMessageOptions.RequireReceiver);
										scoreTextObj.SendMessage("comboChange", 1, SendMessageOptions.RequireReceiver);
										wordTextObj.SendMessage("wordTextDisplay", 1, SendMessageOptions.RequireReceiver);
										scoreTextObj.SendMessage("scorePlus", SendMessageOptions.RequireReceiver);

										// add animation
										ps.transform.position = hit.point;
										ps.Play();

										comboCount++;
										if(comboCount >= comboBonus && !hasChanged) {
											hasChanged = true;
											PlaneMaterialController.isHot = true;
											TouchZoneMaterialController.isHot = true;
											for(int i=0; i<channelNum; i++) {
												planeObj[i].SendMessage("changeMaterial", true, SendMessageOptions.RequireReceiver);
												touchObj[i].SendMessage("changeMaterial", true, SendMessageOptions.RequireReceiver);
											}
											note.SendMessage("changeMaterial", true, SendMessageOptions.RequireReceiver);
										}
									}	
								}

								while(count[choose]-- > 0) {
									PlaneController.blocksInChannel[choose].Dequeue();
								}
							}
						}
					}

					if(touch.phase == TouchPhase.Ended) {
						recepient.SendMessage ("onTouchUp", hit.point, SendMessageOptions.DontRequireReceiver);
						planeObj[choose].SendMessage ("onTouchUp", hit.point, SendMessageOptions.DontRequireReceiver);
					}

					if(touch.phase == TouchPhase.Stationary) {
						recepient.SendMessage ("onTouchStay", hit.point, SendMessageOptions.DontRequireReceiver);
						planeObj[choose].SendMessage ("onTouchStay", hit.point, SendMessageOptions.DontRequireReceiver);
					}

					if(touch.phase == TouchPhase.Moved) {
						recepient.SendMessage ("onTouchUp", hit.point, SendMessageOptions.DontRequireReceiver);
						planeObj[choose].SendMessage ("onTouchUp", hit.point, SendMessageOptions.DontRequireReceiver);
					}

					if(touch.phase == TouchPhase.Canceled) {
						recepient.SendMessage ("onTouchExit", hit.point, SendMessageOptions.DontRequireReceiver);
						planeObj[choose].SendMessage ("onTouchExit", hit.point, SendMessageOptions.DontRequireReceiver);
					}
				}
			}

			foreach(GameObject g in touchesOld) {
				if(!touchList.Contains(g)) {
					g.SendMessage ("OnTouchExit", hit.point, SendMessageOptions.DontRequireReceiver);
				}
			}
		}
		#endif
	}
}
