using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class TouchController : MonoBehaviour {
	Camera myCamera;
	public LayerMask touchInputMask;
	private List<GameObject> touchList = new List<GameObject> ();
	private GameObject[] touchesOld;
	private RaycastHit hit;

	private GameObject[] planeObj = new GameObject[4];
	private GameObject scoreTextObj, wordTextObj;

	// Use this for initialization
	void Start () {
		myCamera = GetComponent<Camera>();
		for(int i=0; i<4; i++) {
			planeObj [i] = GameObject.Find ("Plane" + i);
		}
		scoreTextObj = GameObject.Find ("Score");
		wordTextObj = GameObject.Find ("Word");
	}

	// Update is called once per frame
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
				} else {
					choose = 3;
				}
					
				if(Input.GetMouseButtonDown(0)) {
					recepient.SendMessage ("onTouchDown", hit.point, SendMessageOptions.DontRequireReceiver);
					planeObj[choose].SendMessage ("onTouchDown", hit.point, SendMessageOptions.DontRequireReceiver);

					if(PlaneController.blocksInChannel[choose].Count > 0) {
						foreach(BlockWrapper tmpBlockWrapper in PlaneController.blocksInChannel[choose]) {
							float tmpPos = planeObj[choose].transform.InverseTransformPoint (
								tmpBlockWrapper.blockObj.transform.position).z;
							if(!tmpBlockWrapper.isScored && tmpPos <= PlaneController.touchZoneLocalMin && 
								tmpPos >= PlaneController.endingPointLocalMin) {
								tmpBlockWrapper.blockObj.transform.position = new Vector3 (100, 0, 0);
								tmpBlockWrapper.isScored = true;
								scoreTextObj.SendMessage("scorePlus");
								wordTextObj.SendMessage("wordTextDisplay", 1);
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

					if(PlaneController.blocksInChannel[choose].Count > 0) {
						foreach(BlockWrapper tmpBlockWrapper in PlaneController.blocksInChannel[choose]) {
							float tmpPos = planeObj[choose].transform.InverseTransformPoint (
								tmpBlockWrapper.blockObj.transform.position).z;
							if(!tmpBlockWrapper.isScored && tmpPos <= PlaneController.touchZoneLocalMin && 
								tmpPos >= PlaneController.endingPointLocalMin) {
								tmpBlockWrapper.blockObj.transform.position = new Vector3 (100, 0, 0);
								tmpBlockWrapper.isScored = true;
								scoreTextObj.SendMessage("scorePlus");
								wordTextObj.SendMessage("wordTextDisplay", 1);
							}	
						}
					}
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

					if(recepient.name == "TouchZone0") {
						choose = 0;
					} else if(recepient.name == "TouchZone1") {
						choose = 1;
					} else if(recepient.name == "TouchZone2") {
						choose = 2;
					} else {
						choose = 3;
					}

					if(touch.phase == TouchPhase.Began) {
						recepient.SendMessage ("onTouchDown", hit.point, SendMessageOptions.DontRequireReceiver);
						planeObj[choose].SendMessage ("onTouchDown", hit.point, SendMessageOptions.DontRequireReceiver);

						if(PlaneController.blocksInChannel[choose].Count > 0) {
							foreach(BlockWrapper tmpBlockWrapper in PlaneController.blocksInChannel[choose]) {
								float tmpPos = planeObj[choose].transform.InverseTransformPoint (
									tmpBlockWrapper.blockObj.transform.position).z;
								if(!tmpBlockWrapper.isScored && tmpPos <= PlaneController.touchZoneLocalMin && 
									tmpPos >= PlaneController.endingPointLocalMin) {
									tmpBlockWrapper.blockObj.transform.position = new Vector3 (100, 0, 0);
									tmpBlockWrapper.isScored = true;
									scoreTextObj.SendMessage("scorePlus");
									wordTextObj.SendMessage("wordTextDisplay", 1);
								}	
							}
						}
					}
					if(touch.phase == TouchPhase.Ended) {
						recepient.SendMessage ("onTouchUp", hit.point, SendMessageOptions.DontRequireReceiver);
						planeObj[choose].SendMessage ("onTouchUp", hit.point, SendMessageOptions.DontRequireReceiver);
					}
					if(touch.phase == TouchPhase.Stationary || touch.phase == TouchPhase.Moved) {
						recepient.SendMessage ("onTouchStay", hit.point, SendMessageOptions.DontRequireReceiver);
						planeObj[choose].SendMessage ("onTouchStay", hit.point, SendMessageOptions.DontRequireReceiver);

						if(PlaneController.blocksInChannel[choose].Count > 0) {
							foreach(BlockWrapper tmpBlockWrapper in PlaneController.blocksInChannel[choose]) {
								float tmpPos = planeObj[choose].transform.InverseTransformPoint (
									tmpBlockWrapper.blockObj.transform.position).z;
								if(!tmpBlockWrapper.isScored && tmpPos <= PlaneController.touchZoneLocalMin && 
									tmpPos >= PlaneController.endingPointLocalMin) {
									tmpBlockWrapper.blockObj.transform.position = new Vector3 (100, 0, 0);
									tmpBlockWrapper.isScored = true;
									scoreTextObj.SendMessage("scorePlus");
									wordTextObj.SendMessage("wordTextDisplay", 1);
								}	
							}
						}
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