using UnityEngine;
using System.Collections;
using System.IO;
using UnityEngine.UI;

public class AppleMusicController : MonoBehaviour {

	public static AppleMusicController instance = null;

	void Awake()
	{
		if(instance == null)
		{
			instance = this;
		} else if(instance != this)
		{
			Destroy(gameObject);
		}
	}

	public void QueryAppleMusic(string productID)
	{
		musicManager.queryAppleMusic(productID);
	}

	public void StopAppleMusic()
	{
		musicManager.stopAppleMusic();
	}

	public void DidReceiveResponse(string response)
	{
		Debug.Log (response);
	}

	#region Metadata extraction

	public void ExtractTitle (string title) {
		Debug.Log ("Title: " + title);
	}

	public void ExtractArtist (string artist) {
		Debug.Log ("Artist: " + artist);
	}

	public void ExtractAlbumTitle (string albumTitle) {
		Debug.Log ("Album title: " + albumTitle);
	}

	public void ExtractGenre (string genre) {
		Debug.Log ("Genre: " + genre);
	}

	public void ExtractLyrics (string lyrics) {
		Debug.Log ("Lyrics: " + lyrics);
	}

	public void ExtractDuration (string duration) {
		Debug.Log ("Duration: " + duration);		
	}

	#endregion
}
