using UnityEngine;
using System.Collections;

public class BackgroundMusicController : MonoBehaviour {
	public AudioSource music;

	void Start () {
		music = GetComponent<AudioSource> ();
		music.PlayDelayed (2.2f);

	}

	IEnumerator delay(){
		yield return new WaitForSeconds (5);
		Application.LoadLevel ("StatisticsScene");
	}

	void Update(){
		if(music.isPlaying){
			
		}else{
			StartCoroutine (delay ());
		}
	}
}
