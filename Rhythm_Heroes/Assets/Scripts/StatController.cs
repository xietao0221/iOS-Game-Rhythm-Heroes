using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StatController : MonoBehaviour {
	public float score = 0, combo = 0, miss = 0;
	public Text grade, totalScore, maxComboVal, perfectVal, missVal;
	string strGrade = "Ss", strTotalScore = "0", strMaxComboVal = "0", strPerfectVal = "0", strMissVal = "0";

	void Awake() {
		score = ScoreController.scoreCount;
		combo = ScoreController.comboMax;
		miss = ScoreController.missNum;

		strTotalScore = (score + combo * 2).ToString ();
		strPerfectVal = score.ToString ();
		strMissVal = miss.ToString ();
		strMaxComboVal = combo.ToString ();

		if(miss == 0) {
			strGrade = "Ss";
		} else {
			float missPerc = (float)(miss) / (float)(score);
			if(missPerc <= 0.05) {
				strGrade = "S";
			} else if(missPerc <= 0.1) {
				strGrade = "A";
			} else if(missPerc <= 0.15) {
				strGrade = "B";
			} else if(missPerc <= 0.2) {
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
