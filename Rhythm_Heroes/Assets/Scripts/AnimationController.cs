using UnityEngine;
using System.Collections;

public class AnimationController : MonoBehaviour {
	public Animator anim;

	// Use this for initialization
	void Start () {
		anim = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
//		if (Input.GetKeyDown (KeyCode.Space)) {
//			anim.SetTrigger ("touchPlane");
//		}
//		if (Input.GetKeyDown (KeyCode.A)) {
//			anim.SetTrigger ("getScoreTouchPlane");
//		}
		if (Input.GetMouseButton (0)) {
			Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
			RaycastHit rayCastHit;
			if (Physics.Raycast (ray.origin, ray.direction, out rayCastHit, Mathf.Infinity)) {
				this.transform.position = rayCastHit.point;
				//print ("Mouse Click!");
				anim.SetTrigger ("touchPlane");
			}
		}
	}
//	void getScoreBlooming () {
//		this.transform.position = rayCastHit.point;
//		anim.SetTrigger ("getScoreTouchPlane");
//	}
}
