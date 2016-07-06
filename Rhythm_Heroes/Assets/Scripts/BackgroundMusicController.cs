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

//		float longer = Mathf.Abs (PlaneController.endingPointLocalMin);
//		float shorter = Mathf.Abs (PlaneController.touchZoneLocalMin);
//		float len = shorter + (longer - shorter) / 2;
//		float y = PlaneController.planeObj[0].transform.forward.y;
//		float z = PlaneController.planeObj [0].transform.forward.z;
//		float speed = Mathf.Sqrt (y * y + z * z) / PlaneController.blockSpeed[0] * 50.0f;
//		print (speed);
//		float backgroundMusicDelay = len / speed;

		yield return new WaitForSeconds (PlaneController.countDownInterval);
//		music.Play ();
		music.PlayDelayed (2.5f);
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
