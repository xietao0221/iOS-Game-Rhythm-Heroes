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
	private GameObject note, clickParticle, getScoreParticle;
	private ParticleSystem clickEff, getScoreEff;
	private GameObject scoreTextObj, wordTextObj;
	private int channelNum;
	private AnimationController ac;

	public static int comboCount;
	public static bool hasChanged;

	void Start () {
		comboCount = 0;
		hasChanged = false;
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
		getScoreParticle = GameObject.Find ("ring3");
		clickParticle = GameObject.Find ("clickEffect");
//		supernoteParticle = GameObject.Find ("frameBall");
		clickEff = clickParticle.GetComponent<ParticleSystem> ();
		getScoreEff = getScoreParticle.GetComponent<ParticleSystem> ();
//		supernoteEff = supernoteParticle.GetComponent<ParticleSystem> ();
		comboBonus = PlaneController.comboBonus;
//		note.SendMessage ("changeMaterial", false, SendMessageOptions.RequireReceiver);
		ac = gameObject.GetComponent<AnimationController> ();
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
					// mouse click effect
					clickEff.transform.position = hit.point;
					clickEff.Play();

					// deal with super note
					lock(PlaneController.mutex) {
						if(choose == PlaneController.superBlockPos) {
							BlockWrapper superBlockWrapper = PlaneController.superBlockClone;
							float tmpSuperBlockPos = planeObj[choose].transform.InverseTransformPoint (
								superBlockWrapper.blockObj.transform.position).z;
							if(tmpSuperBlockPos <= PlaneController.touchZoneLocalMin && 
								tmpSuperBlockPos >= PlaneController.endingPointLocalMin) {
								// catch super note, get score
								superBlockWrapper.blockObj.transform.position = new Vector3 (100, 0, 0);
								PlaneController.isSuperBlockOnPlane = false;
								PlaneController.isSuperBlockMove = false;
								scoreTextObj.SendMessage ("statChange", 3, SendMessageOptions.RequireReceiver);
								scoreTextObj.SendMessage ("superNotePlus", SendMessageOptions.RequireReceiver);
								wordTextObj.SendMessage("wordTextDisplay", 2, SendMessageOptions.RequireReceiver);
								// super note effect
								clickEff.Stop();
								getScoreEff.transform.position = hit.point;
								getScoreEff.Play();
								ac.emitGreenCore();
							}	
						}
					}


					// deal with regular note
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
									// mouse click & get score effect
									clickEff.Stop();
									getScoreEff.transform.position = hit.point;
									getScoreEff.Play();

									comboCount++;
									if(comboCount >= comboBonus && !hasChanged) {
										hasChanged = true;
										for(int i=0; i<channelNum; i++) {
											planeObj[i].SendMessage("changeMaterial", true, SendMessageOptions.RequireReceiver);
											touchObj[i].SendMessage("changeMaterial", true, SendMessageOptions.RequireReceiver);
										}
										PlaneMaterialController.isHot = true;
										TouchZoneMaterialController.isHot = true;
										// enable the emission of note material
										note.SendMessage("changeMaterial", true, SendMessageOptions.RequireReceiver);
										// change left & right plane animation
										ac.changePlaneAni(true);
									}
									// emit particles
									if (comboCount == comboBonus) { // 20
										ac.particleEmit1();
									}
									if (comboCount % 15 == 0) {   // 35
										ac.particleEmit();
									}
									if (comboCount % 35 == 0) {   // 48
										ac.particleEmit2(); 
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
						// touch effect
						clickEff.transform.position = hit.point;
						clickEff.Play();


						// deal with super note
						lock(PlaneController.mutex) {
							if(choose == PlaneController.superBlockPos) {
								BlockWrapper superBlockWrapper = PlaneController.superBlockClone;
								float tmpSuperBlockPos = planeObj[choose].transform.InverseTransformPoint (
									superBlockWrapper.blockObj.transform.position).z;
								if(tmpSuperBlockPos <= PlaneController.touchZoneLocalMin && 
									tmpSuperBlockPos >= PlaneController.endingPointLocalMin) {
									// catch super note, get score
									superBlockWrapper.blockObj.transform.position = new Vector3 (100, 0, 0);
									PlaneController.isSuperBlockOnPlane = false;
									PlaneController.isSuperBlockMove = false;
									scoreTextObj.SendMessage ("statChange", 3, SendMessageOptions.RequireReceiver);
									scoreTextObj.SendMessage ("superNotePlus", SendMessageOptions.RequireReceiver);
									wordTextObj.SendMessage("wordTextDisplay", 2, SendMessageOptions.RequireReceiver);
									// super note effect
									clickEff.Stop();
									getScoreEff.transform.position = hit.point;
									getScoreEff.Play();
									ac.emitGreenCore();
								}	
							}
						}


						// deal with regular note
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
										// mouse click & get score effect
										clickEff.Stop();
										getScoreEff.transform.position = hit.point;
										getScoreEff.Play();

										comboCount++;
										if(comboCount >= comboBonus && !hasChanged) {
											hasChanged = true;
											for(int i=0; i<channelNum; i++) {
												planeObj[i].SendMessage("changeMaterial", true, SendMessageOptions.RequireReceiver);
												touchObj[i].SendMessage("changeMaterial", true, SendMessageOptions.RequireReceiver);
											}
											PlaneMaterialController.isHot = true;
											TouchZoneMaterialController.isHot = true;
											// enable the emission of note material
											note.SendMessage("changeMaterial", true, SendMessageOptions.RequireReceiver);
											// change left & right plane animation
											ac.changePlaneAni(true);
										}
										// emit particles
										if (comboCount == comboBonus) { // 20
											ac.particleEmit1();
										}
										if (comboCount % 35 == 0) {   // 35
											ac.particleEmit();
										}
										if (comboCount % 48 == 0) {   // 48
											ac.particleEmit2(); 
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
