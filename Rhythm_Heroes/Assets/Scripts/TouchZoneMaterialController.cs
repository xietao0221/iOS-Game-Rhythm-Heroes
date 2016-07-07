using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class TouchZoneMaterialController : MonoBehaviour {

	private Renderer mat;
	public Texture[] textures;
	public static bool isHot;
	private Animator anim;
	private float timeNow = 0.0f;

	void Start() {
		mat = this.GetComponent<Renderer> ();
		anim = this.GetComponent<Animator> ();
		isHot = false;
		timeNow = 0.0f;
	}
	void FixedUpdate() {
		timeNow += Time.deltaTime;
		if (timeNow >= 3.0f) {
			Destroy (anim);
		}
	}

	void onTouchDown() {
		if(isHot) {
			mat.material.mainTexture = textures [3];			// change	
		} else {
			mat.material.mainTexture = textures [1];
		}
	}

	void onTouchUp() {
		if(isHot) {
			mat.material.mainTexture = textures [2];			// change	
		} else {
			mat.material.mainTexture = textures [0];
		}
	}

	void onTouchStay() {
		if(isHot) {
			mat.material.mainTexture = textures [3];			// change	
		} else {
			mat.material.mainTexture = textures [1];
		}
	}

	void onTouchExit() {
		if(isHot) {
			mat.material.mainTexture = textures [2];			// change	
		} else {
			mat.material.mainTexture = textures [0];
		}
	}

	void changeMaterial(bool isHot) {
		if(isHot) {
			// change
			mat.material.mainTexture = textures [2];
		} else {
			mat.material.mainTexture = textures [0];
		}
	}
}
