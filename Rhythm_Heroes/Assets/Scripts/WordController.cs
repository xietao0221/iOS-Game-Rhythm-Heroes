using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class WordController : MonoBehaviour {

	public Text wordText;
	//public Animator anim;
	public Outline outline;

	// Use this for initialization
	void Start () {
		wordText.text = "";
		outline = GetComponent<Outline> ();
	}

	public void wordTextDisplay(int val) {
		if(val == 0) {				// miss
			StartCoroutine (showWord("Miss", (float)0.4));
		} else {					// perfect + combo
			StartCoroutine (showWord("Perfect\n" + ScoreController.combo, (float)0.4));
		}
	}

	IEnumerator showWord(string s, float delay) {
		wordText.text = s;
		wordText.enabled = true;
		if (s == "Miss") {
			//wordText.color = new Color ((float)0.89, (float)0.41, (float)0.91);
			wordText.color = new Color ((float)0.96, (float)0.82, (float)0.43);
			outline.effectColor = Color.white;
		} else {
			wordText.color = Color.white;
			outline.effectColor = new Color((float)0.14, (float)0.92, (float)0.69);
		}
		yield return new WaitForSeconds(delay);
		wordText.enabled = false;
	}
}