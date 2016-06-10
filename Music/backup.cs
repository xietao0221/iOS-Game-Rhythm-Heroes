using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class TouchController : MonoBehaviour {
	Camera myCamera;
	public LayerMask touchInputMask;
	private List<GameObject> touchList = new List<GameObject> ();
	private GameObject[] touchesOld;
	private RaycastHit hit;

	// Use this for initialization
	void Start () {
		myCamera = GetComponent<Camera>();
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.touchCount > 0) {
			touchesOld = new GameObject[touchList.Count];
			touchList.CopyTo (touchesOld);
			touchList.Clear ();

			foreach(Touch touch in Input.touches) {
				Ray ray = myCamera.ScreenPointToRay (touch.position);
				RaycastHit hit;

				if(Physics.Raycast(ray, out hit, touchInputMask)) {
					GameObject recepient = hit.transform.gameObject;
					touchList.Add (recepient);
					if(touch.phase == TouchPhase.Began) {
						recepient.SendMessage ("OnTouchDown", hit.point, SendMessageOptions.DontRequireReceiver);
					}
					if(touch.phase == TouchPhase.Ended) {
						recepient.SendMessage ("OnTouchUp", hit.point, SendMessageOptions.DontRequireReceiver);
					}
					if(touch.phase == TouchPhase.Stationary || touch.phase == TouchPhase.Moved) {
						recepient.SendMessage ("OnTouchStay", hit.point, SendMessageOptions.DontRequireReceiver);
					}
					if(touch.phase == TouchPhase.Canceled) {
						recepient.SendMessage ("OnTouchExit", hit.point, SendMessageOptions.DontRequireReceiver);
					}
				}
			}

			foreach(GameObject g in touchesOld) {
				if(!touchList.Contains(g)) {
					g.SendMessage ("OnTouchExit", hit.point, SendMessageOptions.DontRequireReceiver);
				}
			}
		}
	}
}