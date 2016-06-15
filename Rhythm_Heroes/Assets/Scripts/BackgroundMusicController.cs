using UnityEngine;
using System.Collections;

public class BackgroundMusicController : MonoBehaviour {
	public AudioSource music;

	void Start () {
		music = GetComponent<AudioSource> ();
		StartCoroutine (delay ());
//		music.Play();
	}

	IEnumerator delay(){
		yield return new WaitForSeconds (2.2f);
		music.Play ();
	}
}
