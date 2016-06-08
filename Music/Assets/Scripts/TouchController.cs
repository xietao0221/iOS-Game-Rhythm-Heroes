using UnityEngine;
using System.Collections;

public class TouchController : MonoBehaviour {
	private GameObject planeObj, scoreTextObj, wordTextObj;

	// Use this for initialization
	void Start () {
		planeObj = GameObject.Find ("Plane");
		scoreTextObj = GameObject.Find ("ScoreText");
		wordTextObj = GameObject.Find ("WordText");
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.touchCount > 0) {
			for(int j=0; j<Input.touchCount; j++) {
				Touch touch = Input.GetTouch (j);
				if (touch.position.y > PlaneController.touchZone [0, 3]) {
					continue;
				} else {
					for(int i=0; i<4; i++) {
						if(touch.position.x >= PlaneController.touchZone[i, 0] && 
							touch.position.x <= PlaneController.touchZone[i, 1]) {
							if(PlaneController.blocksInChannel[i].Count > 0) {
								BlockWrapper tmpBlockWrapper = PlaneController.blocksInChannel [i].Peek ();
								if(!tmpBlockWrapper.isScored && 
									planeObj.transform.InverseTransformPoint (tmpBlockWrapper.blockObj.transform.position).z <=
									PlaneController.touchZoneLocalMin) {
									tmpBlockWrapper.blockObj.transform.position = new Vector3 (100, 0, 0);
									tmpBlockWrapper.isScored = true;
									((ScoreController)(scoreTextObj.GetComponent (typeof(ScoreController)))).scorePlus();
									((ScoreController)(wordTextObj.GetComponent (typeof(ScoreController)))).wordTextDisplay(1);
								}	
							}
						}
					}
				}
			}
		}
	}
}