using UnityEngine;
using System.Collections;

public class NoteMaterialController : MonoBehaviour {
	private Renderer rend;

	void Start() {
		rend = this.GetComponent<Renderer>();
		rend.enabled = true;
		rend.sharedMaterial.EnableKeyword("_EMISSION");
		rend.sharedMaterial.DisableKeyword("_EMISSION");
	}

	void changeMaterial(bool isHot) {
		if(isHot) {	
			rend.sharedMaterial.EnableKeyword("_EMISSION");
		} else {
			rend.sharedMaterial.DisableKeyword("_EMISSION");
		}
	}
}