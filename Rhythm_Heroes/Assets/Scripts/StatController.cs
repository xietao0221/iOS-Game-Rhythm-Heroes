using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StatController : MonoBehaviour {
	public float score = 0, combo = 0, miss = 0, perfect = 0, block = ScoreController.blockNum;
	public Text grade, totalScore, maxComboVal, perfectVal, missVal;
	string strGrade = "Ss", strTotalScore = "0", strMaxComboVal = "0", strPerfectVal = "0", strMissVal = "0";

	void Awake() {
		score = ScoreController.scoreCount;
		combo = Mathf.Max(ScoreController.comboMax, ScoreController.combo);
		miss = ScoreController.missNum;
		perfect = ScoreController.perfectNum;

		strTotalScore = score.ToString ();
		strPerfectVal = perfect.ToString ();
		strMissVal = miss.ToString ();
		strMaxComboVal = combo.ToString ();

		if(miss == 0) {
			strGrade = "Ss";
		} else {
			float missPerc = (float)(miss) / (float)(block);
			if(missPerc <= 0.01) {
				strGrade = "S";
			} else if(missPerc <= 0.02) {
				strGrade = "A";
			} else if(missPerc <= 0.05) {
				strGrade = "B";
			} else if(missPerc <= 0.1) {
				strGrade = "C";
			} else {
				strGrade = "F";
			}
		}
	}

	void Update() {
		grade.text = strGrade;
		totalScore.text = strTotalScore;
		maxComboVal.text = strMaxComboVal;
		perfectVal.text = strPerfectVal;
		missVal.text = strMissVal;
	}
}