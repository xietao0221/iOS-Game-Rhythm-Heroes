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
#if UNITY_EDITOR
		if(Input.GetMouseButton(0) || Input.GetMouseButtonDown(0) || Input.GetMouseButtonUp(0)) {
			touchesOld = new GameObject[touchList.Count];
			touchList.CopyTo (touchesOld);
			touchList.Clear ();

			Ray ray = myCamera.ScreenPointToRay (Input.mousePosition);

			if(Physics.Raycast(ray, out hit, touchInputMask)) {
				GameObject recepient = hit.transform.gameObject;
				touchList.Add (recepient);

				if(Input.GetMouseButtonDown(0)) {
					recepient.SendMessage ("onTouchDown", hit.point, SendMessageOptions.DontRequireReceiver);
				}
				if(Input.GetMouseButtonUp(0)) {
					recepient.SendMessage ("onTouchUp", hit.point, SendMessageOptions.DontRequireReceiver);
				}
				if(Input.GetMouseButton(0)) {
					recepient.SendMessage ("onTouchStay", hit.point, SendMessageOptions.DontRequireReceiver);
				}
			}


			foreach(GameObject g in touchesOld) {
				if(!touchList.Contains(g)) {
					g.SendMessage ("onTouchExit", hit.point, SendMessageOptions.DontRequireReceiver);
				}
			}
		}
#endif



		if(Input.touchCount > 0) {
			touchesOld = new GameObject[touchList.Count];
			touchList.CopyTo (touchesOld);
			touchList.Clear ();

			foreach(Touch touch in Input.touches) {
				Ray ray = myCamera.ScreenPointToRay (touch.position);

				if(Physics.Raycast(ray, out hit, touchInputMask)) {
					GameObject recepient = hit.transform.gameObject;
					touchList.Add (recepient);

					if(touch.phase == TouchPhase.Began) {
						recepient.SendMessage ("onTouchDown", hit.point, SendMessageOptions.DontRequireReceiver);
					}
					if(touch.phase == TouchPhase.Ended) {
						recepient.SendMessage ("onTouchUp", hit.point, SendMessageOptions.DontRequireReceiver);
					}
					if(touch.phase == TouchPhase.Stationary || touch.phase == TouchPhase.Moved) {
						recepient.SendMessage ("onTouchStay", hit.point, SendMessageOptions.DontRequireReceiver);
					}
					if(touch.phase == TouchPhase.Canceled) {
						recepient.SendMessage ("onTouchExit", hit.point, SendMessageOptions.DontRequireReceiver);
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