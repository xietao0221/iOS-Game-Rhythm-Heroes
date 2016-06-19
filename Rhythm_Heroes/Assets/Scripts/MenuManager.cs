
using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour {
	public void GoToThree() {
		SceneManager.LoadScene ("GameScene_ThreeTrack");
	}

	public void GoTo_Four() {
		SceneManager.LoadScene ("GameScene_FourTrack");
	}

	public void GoTo_Five() {
		SceneManager.LoadScene ("GameScene_FiveTrack");
	}

	public void GoTo_MainScene() {
		SceneManager.LoadScene ("MainScene");
	}
}