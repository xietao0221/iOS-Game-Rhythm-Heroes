using UnityEngine;
using System.Collections;

public class TouchZoneMaterialController : MonoBehaviour {

	private Material mat;
	public Texture[] textures;

	void Start() {
		mat = this.GetComponent<Renderer> ().material;
	}

	void onTouchDown() {
		mat.mainTexture = textures [1];
	}

	void onTouchUp() {
		mat.mainTexture = textures [0];
	}

	void onTouchStay() {
		mat.mainTexture = textures [1];
	}

	void onTouchExit() {
		mat.mainTexture = textures [0];
	}
}
