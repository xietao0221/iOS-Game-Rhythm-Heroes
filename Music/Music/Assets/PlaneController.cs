using UnityEngine;
using System.Collections;

public class planeController: MonoBehaviour {

	public GameObject Sphere;

	public float timeStart = -1;
	public float timeLong = 100;
	public float speed = 10;
	public float timeNow = 10;

	// Use this for initialization
	void Start () {
		Sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		Sphere.AddComponent<Rigidbody>();
		Sphere.transform.position = new Vector3(0, 1, 4);
		Sphere.transform.forward = this.transform.forward;
	}

	// Update is called once per frame
	void Update () {
		

	}
}
