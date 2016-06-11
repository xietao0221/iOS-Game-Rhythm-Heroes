using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class WordController : MonoBehaviour {

	public Text wordText;

	// Use this for initialization
	void Start () {
		wordText.text = "";
	}
		
	public void wordTextDisplay(int val) {
		if(val == 1) {
			StartCoroutine (showWord("Perfect", (float)0.4));
		} else {
			StartCoroutine (showWord("Miss", (float)0.4));
		}
	}

	IEnumerator showWord(string s, float delay) {
		wordText.text = s;
		wordText.enabled = true;
		yield return new WaitForSeconds(delay);
		wordText.enabled = false;
	}
}
