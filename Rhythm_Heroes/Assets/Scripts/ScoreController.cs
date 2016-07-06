using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreController : MonoBehaviour {

	public Text scoreText;
	public static float scoreCount, comboMax, combo;
	public static float blockNum, missNum, perfectNum, superNoteNum;

	void Start () {
		scoreText.text = "SCORE : 0";
		scoreCount = 0;
		comboMax = 0;
		combo = 0;

		blockNum = 0;
		missNum = 0;
		perfectNum = 0;
		superNoteNum = 0;
	}

	void FixedUpdate () {
		scoreText.text = "SCORE : " + scoreCount;
	}

	public void scorePlus() {
		scoreCount += (1 + combo * 2);
	}

	public void superNotePlus() {
		scoreCount += 500;
	}

	public void comboChange(int val) {
		if(val == 1) {			// combo plus
			++combo;
		} else {				// combo returns to 0
			comboMax = Mathf.Max (comboMax, combo);
			combo = 0;
		}
	}

	public void statChange(int val) {
		switch(val) {
		case 0:
			blockNum++;
			break;
		case 1:
			missNum++;
			break;
		case 2:
			perfectNum++;
			break;
		case 3:
			superNoteNum++;
			break;
		}
	}
}