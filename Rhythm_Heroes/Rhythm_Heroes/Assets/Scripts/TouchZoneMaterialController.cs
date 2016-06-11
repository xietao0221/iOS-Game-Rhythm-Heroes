using UnityEngine;
using System.Collections;

public class TouchZoneMaterialController : MonoBehaviour {

	private Material mat;

	void Start() {
		mat = this.GetComponent<Renderer> ().material;
	}

	void onTouchDown() {
		mat.color = Color.yellow;
	}

	void onTouchUp() {
		mat.color = Color.white;
	}

	void onTouchStay() {
		mat.color = Color.yellow;
	}

	void onTouchExit() {
		mat.color = Color.white;
	}
}
