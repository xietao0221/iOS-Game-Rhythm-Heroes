using UnityEngine;
using System.Collections;
using System.IO;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

[RequireComponent (typeof(AudioSource))]
public class iOSMusic : MonoBehaviour {

    public static iOSMusic instance = null;
	private float[] musicData;

	private WWW _musicLoader;
	public WWW MusicLoader
	{
	    get { return _musicLoader; }
	    set { _musicLoader = value; }
	}

	private AudioSource _audioSource;
	public AudioSource iOSMusicAudioSource
	{
	    get { return _audioSource; }
	    set { _audioSource = value; }
	}

	static public AudioClip _audioClip;
	static public AudioClip _audioClip2;
	static public AudioClip iOSMusicClip
	{
		get { return _audioClip; }
		set { _audioClip = value; }
	}
	static public void readLocalMusic(int musicNum){
		if (musicNum == 0) {
			_audioClip = Resources.Load<AudioClip> ("Canon");
			_audioClip2 = Resources.Load<AudioClip> ("Canon");
		} else if (musicNum == 1) {
			_audioClip = Resources.Load<AudioClip> ("TryEverything");
			_audioClip2 = Resources.Load<AudioClip> ("TryEverything");
		}
	}

	private bool _hasAudioClipStartedPlaying;
	public bool HasAudioClipStartedPlaying
	{
		get { return _hasAudioClipStartedPlaying; }
		set { _hasAudioClipStartedPlaying = value; }
	}

	private bool _shouldAppendToPlaylist;
	public bool ShouldAppendToPlaylist
	{
	    get { return _shouldAppendToPlaylist; }
	    set { _shouldAppendToPlaylist = value; }
	}

	void Awake () {
        if (instance == null)   
        {             
            instance = this;
        } else if (instance != this)
        {
			Destroy(gameObject);
        }
        DontDestroyOnLoad(gameObject);
    }
	
	// Use this for initialization
	void Start () {
		_audioSource = GetComponent<AudioSource> ();
		ShouldAppendToPlaylist = HasAudioClipStartedPlaying = false;
	}
	
	// Update is called once per frame
	void Update () {
	    CheckAudioSourcePlayback();
	}

	void CheckAudioSourcePlayback()
	{
	    // If an song playing via an Audio Source finishes playing, attempt to load the next song in the playlist via an Audio Source.
		if(HasAudioClipStartedPlaying && !iOSMusicAudioSource.isPlaying)
	    {
			HasAudioClipStartedPlaying = false;
	        musicManager.nextSong();
	    }
	}

	public void HandleAppendToggleChange(bool toggle)
	{
	    // Handles the "Append to Playlist" toggle state change.
	    ShouldAppendToPlaylist = toggle;
	}

	void ResetButtonStates()
	{
	    if(GameObject.Find("NextButton") && GameObject.Find("PreviousButton"))
	    {
		    GameObject.Find("NextButton").GetComponent<Button>().interactable = true;
		    GameObject.Find("PreviousButton").GetComponent<Button>().interactable = true;
		}
	}

	public void LoadAudioClip() 
	{
		if(iOSMusicAudioSource.isPlaying) {
			iOSMusicAudioSource.Stop();
			Resources.UnloadUnusedAssets();

			if(iOSMusicAudioSource.clip !=null){
				iOSMusicAudioSource.clip = null;
			}
		}

		string path = Application.persistentDataPath.Substring (0, Application.persistentDataPath.Length - 5);
		path = path.Substring (0, path.LastIndexOf ('/'));
		string songPath = path + "/Documents/" + "song" + ".m4a";
		StartCoroutine(LoadMusic (songPath));
	
	}

	IEnumerator LoadMusic(string songPath) {
		if(System.IO.File.Exists(songPath)) {
			iOSMusicAudioSource.Stop();

			_musicLoader = new WWW ("file://"+ songPath);
			yield return _musicLoader;

			if(_musicLoader != null && _musicLoader.isDone) {

				_audioClip = _musicLoader.GetAudioClip(false,true,AudioType.AUDIOQUEUE) as AudioClip;
				_audioClip2 = _musicLoader.GetAudioClip(false,true,AudioType.AUDIOQUEUE) as AudioClip;

				if (MenuManager.sceneNumber == 3) {
					SceneManager.LoadScene ("GameScene_ThreeTrack");
				} else if (MenuManager.sceneNumber == 4) {
					SceneManager.LoadScene ("GameScene_FourTrack");
				} else {
					SceneManager.LoadScene ("GameScene_FiveTrack");
				}
				ResetButtonStates();
			}
		} else {
			Debug.Log("Unable to locate converted song file.");
		}
	}
	
	#region Metadata extraction

	void ExtractTitle (string title) {
		Debug.Log ("Title: " + title);
	}

	void ExtractArtist (string artist) {
		Debug.Log ("Artist: " + artist);
	}

	void ExtractAlbumTitle (string albumTitle) {
		Debug.Log ("Album title: " + albumTitle);
	}

	void ExtractBPM (string bpm) {
		Debug.Log ("BPM: " + bpm);
	}

	void ExtractGenre (string genre) {
		Debug.Log ("Genre: " + genre);
	}

	void ExtractLyrics (string lyrics) {
		Debug.Log ("Lyrics: " + lyrics);
	}

	void ExtractDuration (string duration) {
		Debug.Log ("Duration: " + duration);		
	}
	
	void ExtractArtwork () {
		Texture2D tex = null;
		byte[] fileData;
		string artworkPath = Application.persistentDataPath + "/songArtwork.png";
		
		if (File.Exists(artworkPath))     {
			fileData = File.ReadAllBytes(artworkPath);
			tex = new Texture2D(2, 2);
			tex.LoadImage(fileData); 

			// Convert newly created texture to a Sprite and assign it to the Canvas Image object.
			Sprite artworkSprite = Sprite.Create(tex, new Rect(0,0,tex.width,tex.height), new Vector2(.5f,.5f),40);
			GameObject.Find("AlbumArtwork").GetComponent<Image>().sprite = artworkSprite;
		}		
	}
	
	#endregion


	void UserDidCancel () {
	    ResetButtonStates();
		Debug.Log("User has cancelled the song selection.");
	}
}
