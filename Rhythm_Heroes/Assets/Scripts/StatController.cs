using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StatController : MonoBehaviour {
	public float score = 0, combo = 0;
	public Text statText;

	void Start () {
		score = ScoreController.scoreCount;
		combo = ScoreController.comboMax;
	}

	void Update() {
		statText.text = "Score: " + score + "\nCombo: " + combo;
	}
}
