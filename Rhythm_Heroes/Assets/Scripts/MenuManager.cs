using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour {
	public static int sceneNumber;

	public void GoToThree() {
		#if UNITY_EDITOR
		iOSMusic.readLocalMusic(0);
		SceneManager.LoadScene ("GameScene_ThreeTrack");
		#endif

		#if UNITY_IPHONE
		sceneNumber = 3;
		iOSMusic.instance.HasAudioClipStartedPlaying = false;
		SceneManager.LoadScene("LoadScene");
		musicManager.loadAudioClip(iOSMusic.instance.ShouldAppendToPlaylist);
		#endif
	}

	public void GoTo_Four() {
		#if UNITY_EDITOR
		iOSMusic.readLocalMusic(0);
		SceneManager.LoadScene ("GameScene_FourTrack");
		#endif

		#if UNITY_IPHONE
		sceneNumber = 4;
		iOSMusic.instance.HasAudioClipStartedPlaying = false;
		SceneManager.LoadScene("LoadScene");
		musicManager.loadAudioClip(iOSMusic.instance.ShouldAppendToPlaylist);
		#endif
	}

	public void GoTo_Five() {
		#if UNITY_EDITOR
		iOSMusic.readLocalMusic(0);
		SceneManager.LoadScene ("GameScene_FiveTrack");
		#endif

		#if UNITY_IPHONE
		sceneNumber = 5;
		iOSMusic.instance.HasAudioClipStartedPlaying = false;
//		SceneManager.LoadScene("LoadScene");
		musicManager.loadAudioClip(iOSMusic.instance.ShouldAppendToPlaylist);
		#endif
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