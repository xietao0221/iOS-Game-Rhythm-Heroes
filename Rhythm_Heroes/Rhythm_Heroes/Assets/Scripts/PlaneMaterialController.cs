using UnityEngine;
using System.Collections;

public class PlaneMaterialController : MonoBehaviour {

	private Material mat;

	void Start() {
		mat = this.GetComponent<Renderer> ().material;
	}

	void onTouchDown() {
		mat.color = Color.blue;
	}

	void onTouchUp() {
		mat.color = Color.white;
	}

	void onTouchStay() {
		mat.color = Color.blue;
	}

	void onTouchExit() {
		mat.color = Color.white;
	}
}
