using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class BackgroundMusicController : MonoBehaviour {
	public AudioSource music;
	public AudioClip clip;

	void Start () {
		music = GetComponent<AudioSource> ();
		music.clip = iOSMusic._audioClip2;
		music.loop = false;
		music.Play ();

		float longer = Mathf.Abs (PlaneController.endingPointLocalMin);
		float shorter = Mathf.Abs (PlaneController.touchZoneLocalMin);
		float len = shorter + (longer - shorter) / 2;
		float y = PlaneController.planeObj[0].transform.forward.y;
		float z = PlaneController.planeObj [0].transform.forward.z;
		float speed = Mathf.Sqrt (y * y + z * z) / PlaneController.blockSpeed[0] * 50.0f;
		print (speed);
		float backgroundMusicDelay = len / speed;
		music.PlayDelayed (backgroundMusicDelay);
	}
		
	IEnumerator delay(){
		yield return new WaitForSeconds (4);
		SceneManager.LoadScene ("StatisticsScene");
	}

	void Update(){
		if (!music.isPlaying) {
			StartCoroutine (delay ());
		}
	}
}
