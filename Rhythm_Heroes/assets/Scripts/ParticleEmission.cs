using UnityEngine;
using System.Collections;

public class ParticleEmission : MonoBehaviour {
	public ParticleSystem ps;

	//public ParticleSystem.EmissionModule em;

	// Use this for initialization
	void Start () {
//		ps = this.GetComponent<ParticleSystem> ();
	}
	
	// Update is called once per frame
	void Update () {
//		if (Input.GetMouseButton(0) || Input.GetMouseButtonDown(0) || Input.GetMouseButtonUp(0)) {
//			Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
//			RaycastHit rayCastHit;
//			if (Physics.Raycast (ray.origin, ray.direction, out rayCastHit, Mathf.Infinity)) {
//				this.transform.position = rayCastHit.point;
//				if (TouchController.getScore) {
//					ps.Play ();
//					TouchController.getScore = false;
//				}
//			}
//		}
	}

//	void test(RaycastHit hit) {
//		ps.transform.position = hit.point;
//		ps.Play ();
//	}
}
