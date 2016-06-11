using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreController : MonoBehaviour {

	public Text scoreText;
	public float scoreCount;

	// Use this for initialization
	void Start () {
		scoreCount = 0;
		scoreText.text = "Score: 0";
	}

	// Update is called once per frame
	void Update () {
		scoreText.text = "Score: " + scoreCount;
//		print (scoreCount);
	}

	public void scorePlus() {
		scoreCount++;
	}
}