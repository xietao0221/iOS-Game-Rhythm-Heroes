using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlaneController : MonoBehaviour {

	public Queue<GameObject> queueSphere;
	public GameObject prefabSphere, prefabPlane;
	GameObject[] sphereClone = new GameObject[4];
	MeshRenderer[] sphereRenderer = new MeshRenderer[4];
	int[] speed = new int[]{50, 40, 30, 20};
	public Vector3[] startingPoints;


	// Use this for initialization
	void Start () {
		prefabPlane = GameObject.Find ("Plane");
		queueSphere = new Queue<GameObject> ();
		Collider collider = GetComponent<Collider> ();
		Vector3 p1 = collider.bounds.min, p2 = collider.bounds.max;
		float len = (float)((p2.x - p1.x) * 0.8);
		p1.x += len / 8;
		p2.x -= len / 8;

		startingPoints = new Vector3[4];
		for(int i=0; i<4; i++) {
			// position
			startingPoints [i] = new Vector3 (p1.x + i * len / 3, p2.y, p2.z);

			// create obj
			sphereClone[i] = Instantiate (prefabSphere, startingPoints[i], Quaternion.identity) as GameObject;

			// Color
			sphereRenderer[i] = sphereClone[i].gameObject.GetComponent<MeshRenderer> () as MeshRenderer;
			if(i == 0) sphereRenderer[i].material.color = Color.red;
			else if(i == 1) sphereRenderer[i].material.color = Color.black;
			else if(i == 2) sphereRenderer[i].material.color = Color.green;
			else sphereRenderer[i].material.color = Color.blue;

			queueSphere.Enqueue (sphereClone[i]);
		}

//		prefabSphere.transform.forward = this.transform.forward;
		//		InvokeRepeating ("InitSphere", 1.0F, 1.0F);
	}

	// Update is called once per frame
	void Update () {
		for(int i=0; i<4; i++) {
			sphereClone [i].transform.position -= prefabPlane.transform.forward / speed [i];
		}
	}

//	void InitSphere() {
//		Instantiate (prefabSphere, new Vector3(0, 5, 5), Quaternion.identity);
//	}
}
