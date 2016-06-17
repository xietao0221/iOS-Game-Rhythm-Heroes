using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class BackgroundMusicController : MonoBehaviour {
	public AudioSource music;

	void Start () {
		music = GetComponent<AudioSource> ();
		music.PlayDelayed (3.6f);
	}

	IEnumerator delay(){
		yield return new WaitForSeconds (4);
		SceneManager.LoadScene ("StatisticsScene");
	}

	void Update(){
		if(!music.isPlaying) {
			StartCoroutine (delay ());
		}
	}
}
