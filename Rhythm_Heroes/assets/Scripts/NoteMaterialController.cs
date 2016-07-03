using UnityEngine;
using System.Collections;

public class NoteMaterialController : MonoBehaviour {

	//public Texture[] textures = new Texture[2];
	private Renderer rend;

	void Start() {
		rend = this.GetComponent<Renderer>();
		rend.enabled = true;
	}

	void changeMaterial(bool isHot) {
		if(isHot) {
			//rend.sharedMaterial.mainTexture = textures [1];	
			rend.sharedMaterial.EnableKeyword("_EMISSION");
			//rend.sharedMaterial.SetFloat ("EmissiveValue", 1);

		} else {
			//rend.sharedMaterial.mainTexture = textures [0];
			rend.sharedMaterial.DisableKeyword("_EMISSION");
		}
	}
}