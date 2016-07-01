using UnityEngine;
using System.Collections;

public class TouchZoneMaterialController : MonoBehaviour {

	private Material mat;
	public Texture[] textures;
	public static bool isHot = false;

	void Start() {
		mat = this.GetComponent<Renderer> ().material;
	}

	void onTouchDown() {
		if(isHot) {
			mat.mainTexture = textures [1];			// change	
		} else {
			mat.mainTexture = textures [1];
		}
	}

	void onTouchUp() {
		if(isHot) {
			mat.mainTexture = textures [0];			// change	
		} else {
			mat.mainTexture = textures [0];
		}
	}

	void onTouchStay() {
		if(isHot) {
			mat.mainTexture = textures [1];			// change	
		} else {
 			mat.mainTexture = textures [1];
		}
	}

	void onTouchExit() {
		if(isHot) {
			mat.mainTexture = textures [0];			// change	
		} else {
			mat.mainTexture = textures [0];
		}
	}
}
