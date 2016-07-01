using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class iOSMusicGUI : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void ShowMusicLibrary()
	{
	    // If the plugin is currently playing a song via an Audio Source, stop playback.
	    if(iOSMusic.instance.iOSMusicAudioSource.isPlaying)
	    {
	        iOSMusic.instance.iOSMusicAudioSource.Stop();
			iOSMusic.instance.HasAudioClipStartedPlaying = false;
	    }

	    // Open Music library and play song with native player.
		musicManager.openNativeMusicPicker(iOSMusic.instance.ShouldAppendToPlaylist);
	}

	public void PlayPause()
	{
	    // If the native player is currently playing, make it pause. If it is currently paused, resume playing.
		musicManager.playPause();	
	}

	public void LoadAudioClip()
	{
	    // Pause the native player if it is playing a song.
	    PlayPause();

	    iOSMusic.instance.HasAudioClipStartedPlaying = false;
		DisableButtons();

		// Open Music library and play selection as Audio Clip.
		musicManager.loadAudioClip(iOSMusic.instance.ShouldAppendToPlaylist);
	}

	public void NextSong()
	{
		iOSMusic.instance.HasAudioClipStartedPlaying = false;
	    DisableButtons();

	    musicManager.nextSong();
	}

	public void PreviousSong()
	{
		iOSMusic.instance.HasAudioClipStartedPlaying = false;
		DisableButtons();

	    musicManager.previousSong();
	}

	void DisableButtons()
	{
	    // Prevent user from tapping "Next" or "Previous" while a song is in the process of loading.
		GameObject.Find("NextButton").GetComponent<Button>().interactable = false;
	    GameObject.Find("PreviousButton").GetComponent<Button>().interactable = false;
	}

	public void GoToScene2()
	{
	    SceneManager.LoadScene("Scene2");
	}

	public void GoToMainScene()
	{
	    SceneManager.LoadScene("iOSMusic");
	}

}
