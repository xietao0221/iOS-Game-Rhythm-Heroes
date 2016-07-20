using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour {
	public static int sceneNumber;
	public static int blockNumPerChannel = 6;
	public static int blockSpeed = 10;		// the smaller the val, the faster the speed
	public static int superBlockSpeed = 5;
	public static float backgroundTimeDelay = 2.5f;
	public static float beatMinInterval = 0.2f;


	public void GoToThree() {
		#if UNITY_EDITOR
		iOSMusic.readLocalMusic(1);
		SceneManager.LoadScene ("GameScene_ThreeTrack");
		#endif

		#if UNITY_IPHONE

		sceneNumber = 3;
		blockNumPerChannel = 4;
		blockSpeed = 12;		// the smaller the val, the faster the speed
		superBlockSpeed = 6;
		backgroundTimeDelay = 3.1f;
		beatMinInterval = 0.25f;

		iOSMusic.instance.HasAudioClipStartedPlaying = false;
		musicManager.loadAudioClip(iOSMusic.instance.ShouldAppendToPlaylist);
		#endif
	}

	public void GoTo_Four() {
		#if UNITY_EDITOR
		iOSMusic.readLocalMusic(1);
		SceneManager.LoadScene ("GameScene_FourTrack");
		#endif

		#if UNITY_IPHONE

		sceneNumber = 4;
		blockNumPerChannel = 6;
		blockSpeed = 10;		// the smaller the val, the faster the speed
		superBlockSpeed = 5;
		backgroundTimeDelay = 2.5f;
		beatMinInterval = 0.2f;

		iOSMusic.instance.HasAudioClipStartedPlaying = false;
		musicManager.loadAudioClip(iOSMusic.instance.ShouldAppendToPlaylist);
		#endif
	}

	public void GoTo_Five() {
		#if UNITY_EDITOR
		iOSMusic.readLocalMusic(1);
		SceneManager.LoadScene ("GameScene_FiveTrack");
		#endif

		#if UNITY_IPHONE

		sceneNumber = 5;
		blockNumPerChannel = 10;
		blockSpeed = 7;		// the smaller the val, the faster the speed
		superBlockSpeed = 4;
		backgroundTimeDelay = 1.8f;
		beatMinInterval = 0.2f;

		iOSMusic.instance.HasAudioClipStartedPlaying = false;
		musicManager.loadAudioClip(iOSMusic.instance.ShouldAppendToPlaylist);
		#endif
	}

	public void GoTo_MainScene() {
		SceneManager.LoadScene ("MainScene");
	}

	public void GoTo_CreditsScene() {
		SceneManager.LoadScene ("CreditsScene");
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