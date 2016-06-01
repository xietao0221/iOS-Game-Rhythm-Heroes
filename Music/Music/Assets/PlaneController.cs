using UnityEngine;
using System.Collections;

public class PlaneController : MonoBehaviour {

	public GameObject prefabSphere;
	public Vector3[] startingPoints;
	int speed = 1;

	// Use this for initialization
	void Start () {
		Collider collider = GetComponent<Collider> ();
		Vector3 p1 = collider.bounds.min, p2 = collider.bounds.max;
		float len = (float)((p2.x - p1.x) * 0.8);
		p1.x += len / 8;
		p2.x -= len / 8;

		startingPoints = new Vector3[4];
		for(int i=0; i<4; i++) {
			startingPoints [i] = new Vector3 (p1.x + i * len / 3, p2.y, p2.z);
			Instantiate (prefabSphere, startingPoints[i], Quaternion.identity);
		}

		prefabSphere.transform.forward = this.transform.forward;
		speed = 100;
		//		InvokeRepeating ("InitSphere", 1.0F, 1.0F);
	}

	// Update is called once per frame
	void Update () {
		prefabSphere.transform.position += prefabSphere.transform.forward * Time.deltaTime * speed;;
		//		print (this.);
		//		prefabSphere.transform.Translate(Vector3.forward * Time.deltaTime);
	}

	void InitSphere() {
		Instantiate (prefabSphere, new Vector3(0, 5, 5), Quaternion.identity);
	}
}
