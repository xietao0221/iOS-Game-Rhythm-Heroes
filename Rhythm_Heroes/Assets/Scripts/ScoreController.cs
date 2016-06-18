using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreController : MonoBehaviour {

	public Text scoreText;
	public static float scoreCount = 0, comboMax = 0, combo = 0;
	public static float blockNum = 0, missNum = 0, perfectNum = 0;

	void Start () {
		scoreText.text = "SCORE : 0";
	}
		
	void Update () {
		scoreText.text = "SCORE : " + scoreCount;
	}

	public void scorePlus() {
		scoreCount++;
	}

	public void comboChange(int val) {
		if(val == 1) {			// combo plus
			combo++;
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
		}
//		print ("Block: " + blockNum + ", Perfect: " + perfectNum + ", Miss: " + missNum);
	}
}