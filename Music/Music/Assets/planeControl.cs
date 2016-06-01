using UnityEngine;
using System.Collections;

public class planeControl : MonoBehaviour {
	public GameObject Sphere;
	public sphereControl obj;
	public float timeStart = -1;
	public float timeLong = 100;
	public float speed = 10;
	public float timeNow = 10;

	// Use this for initialization
	void Start () {
		Sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		Sphere.AddComponent<Rigidbody>();
		Sphere.transform.forward = this.transform.forward;
		Sphere.transform.position = new Vector3(0, 2, 4);
		//Sphere.transform.position = transform.position - transform.forward/speed;
		obj = Sphere.GetComponent<sphereControl>();
//		obj.timeStart = 0;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
