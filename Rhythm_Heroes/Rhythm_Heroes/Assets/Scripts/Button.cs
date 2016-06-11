using UnityEngine;
using System.Collections;

public class Button : MonoBehaviour {

	public Color defaultColor, selectedColor;
	private Material mat;

	void Start() {
		mat = this.GetComponent<Renderer> ().material;
	}

	void onTouchDown() {
		mat.color = selectedColor;
	}

	void onTouchUp() {
		mat.color = defaultColor;
	}

	void onTouchStay() {
		mat.color = selectedColor;
	}

	void onTouchExit() {
		mat.color = defaultColor;
	}
}
