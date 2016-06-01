using UnityEngine;
using System.Collections;

public class SphereController : MonoBehaviour {

	public MeshRenderer sphereRenderer;
	GameObject planeObj;
	int speedPara = 30;

	// Use this for initialization
	void Start () {
		sphereRenderer = gameObject.GetComponent<MeshRenderer>() as MeshRenderer;
		sphereRenderer.material.color = Color.black;
		planeObj = GameObject.Find ("Plane");
		this.transform.forward = planeObj.transform.forward;
	}

	// Update is called once per frame
	void Update () {
		this.transform.position -= this.transform.forward / speedPara;
	}
}
