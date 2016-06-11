using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreController : MonoBehaviour {

	public Text scoreText, wordText;
	public float scoreCount;

	// Use this for initialization
	void Start () {
		scoreCount = 0;
		scoreText.text = "Score: 0";
		wordText.text = "";
	}

	// Update is called once per frame
	void Update () {
		scoreText.text = "Score: " + scoreCount;
		print (scoreCount);
	}

	public void scorePlus() {
		scoreCount++;
	}

	public void wordTextDisplay(int val) {
		if(val == 1) {
			wordText.text = "Perfect!";
		} else {
			wordText.text = "Miss!";
		}
	}
}