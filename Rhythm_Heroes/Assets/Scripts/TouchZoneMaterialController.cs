using UnityEngine;
using System.Collections;

public class TouchZoneMaterialController : MonoBehaviour {

	private Material mat;
	public Texture[] textures;
	public static bool isHot;
//	public Animator anim;

	void Start() {
		mat = this.GetComponent<Renderer> ().material;
//		anim = this.GetComponent<Animator> ();
		isHot = false;
	}
//	void Update() {
//		if (Input.GetKeyDown (KeyCode.Space)) {
//			//anim.enabled = false;
//			Destroy (anim> ());
//		}
//	}

	void onTouchDown() {
		if(isHot) {
			mat.mainTexture = textures [3];			// change	
		} else {
			mat.mainTexture = textures [1];
		}
	}

	void onTouchUp() {
		if(isHot) {
			mat.mainTexture = textures [2];			// change	
		} else {
			mat.mainTexture = textures [0];
		}
	}

	void onTouchStay() {
		if(isHot) {
			mat.mainTexture = textures [3];			// change	
		} else {
 			mat.mainTexture = textures [1];
		}
	}

	void onTouchExit() {
		if(isHot) {
			mat.mainTexture = textures [2];			// change	
		} else {
			mat.mainTexture = textures [0];
		}
	}

	void changeMaterial(bool isHot) {
		if(isHot) {
			// change
			mat.mainTexture = textures [2];
		} else {
			mat.mainTexture = textures [0];
		}
	}
}
