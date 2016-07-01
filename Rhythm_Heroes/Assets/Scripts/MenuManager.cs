
using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour {
	public static int sceneNumber;
	public void GoToThree() {
		sceneNumber = 3;
		iOSMusic.instance.HasAudioClipStartedPlaying = false;
		musicManager.loadAudioClip(iOSMusic.instance.ShouldAppendToPlaylist);
	}

	public void GoTo_Four() {
		sceneNumber = 4;
		iOSMusic.instance.HasAudioClipStartedPlaying = false;
		musicManager.loadAudioClip(iOSMusic.instance.ShouldAppendToPlaylist);
	}

	public void GoTo_Five() {
		sceneNumber = 5;
		iOSMusic.instance.HasAudioClipStartedPlaying = false;
		musicManager.loadAudioClip(iOSMusic.instance.ShouldAppendToPlaylist);
	}

	public void GoTo_MainScene() {
		SceneManager.LoadScene ("MainScene");
	}

	public void GoTo_PlayAgain() {
		int channelNum = PlaneController.channelNum;
		switch(channelNum) {
		case 3:
			SceneManager.LoadScene ("GameScene_ThreeTrack");
			break;
		case 4:
			SceneManager.LoadScene ("GameScene_FourTrack");
			break;
		case 5:
			SceneManager.LoadScene ("GameScene_FiveTrack");
			break;
		}
	}
}