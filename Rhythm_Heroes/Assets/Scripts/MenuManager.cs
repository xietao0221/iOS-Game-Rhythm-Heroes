using UnityEngine;
using System.Collections;

public class MenuManager : MonoBehaviour 
{
    public void GoToThree() {
		Application.LoadLevel("GameScene_ThreeTrack");
    }

	public void GoTo_Four() {
		Application.LoadLevel("GameScene_FourTrack");
	}

	public void GoTo_Five() {
		Application.LoadLevel("GameScene_FiveTrack");
	}

	public void GoTo_MainScene() {
		Application.LoadLevel ("MainScene");
	}

    public void Quit() {
        Application.Quit();
    }
}
