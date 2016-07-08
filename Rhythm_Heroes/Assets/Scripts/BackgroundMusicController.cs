using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class BackgroundMusicController : MonoBehaviour {
	public static AudioSource music;
	public AudioClip clip;
	public bool hasBegun = false;

	void Start () {
		StartCoroutine (countDownDelay());
	}

	IEnumerator countDownDelay() {
		music = GetComponent<AudioSource> ();
		music.clip = iOSMusic._audioClip2;
		music.loop = false;

		yield return new WaitForSeconds (PlaneController.countDownInterval);

		music.PlayDelayed (PlaneController.backgroundTimeDelay);
		hasBegun = true;
	}

	IEnumerator delay(){
		yield return new WaitForSeconds (4);
		SceneManager.LoadScene ("StatisticsScene");
	}

	void Update(){
		if (hasBegun && !music.isPlaying) {
			StartCoroutine (delay ());
		}
	}
}
