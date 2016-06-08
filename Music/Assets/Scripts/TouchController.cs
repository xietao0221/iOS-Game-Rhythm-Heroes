using UnityEngine;
using System.Collections;

public class TouchController : MonoBehaviour {
	private GameObject planeObj;

	// Use this for initialization
	void Start () {
		planeObj = GameObject.Find ("Plane");
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
							GameObject tmpBlock = PlaneController.blocksInChannel [i].Peek ();
							if (planeObj.transform.InverseTransformPoint (tmpBlock.transform.position).z <=
								PlaneController.touchZoneLocalMin) {
								print (++PlaneController.score);
							}
						}
					}
				}
			}
		}
	}
}