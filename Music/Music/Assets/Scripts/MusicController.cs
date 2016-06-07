using UnityEngine;
using System.Collections;


public class MusicController : MonoBehaviour { 
	AudioSource audioSource;
//	float[] spectrum = new float[256];
	public GameObject obj;//我们需要动态控制的物体，需要在u3d中把你需要控制的物体赋予该物体 
	// Use this for initialization 
	float[] spectrumPre = new float[64];
	int lastIndex = 2;
	int lastOutput = 2;
	void Start () { 
		audioSource = GetComponent<AudioSource>();
		spectrumPre [0] = -255;
	} 
	// Update is called once per frame 

	void Update () { 
		//建立音谱数组，后面的三个参数我前面已经介绍过，这里是具体用法 
		float[] spectrum = audioSource.GetSpectrumData(64, 0, FFTWindow.Rectangular); 
		int i = 1; 
		//我们控制物体所用到的数值 
		float all = 0; 
		//以下内容是在scence中现实音谱内容 
		// select black line, and choose the max change line
		while (i < 63) 
		{ 
			Debug.DrawLine(new Vector3(i - 1, spectrum[i] + 10, 0), new Vector3(i, spectrum[i + 1] + 10, 0), Color.red,0.5f); 
			//red (i,spectrum,0)
			Debug.DrawLine(new Vector3(i - 1, Mathf.Log(spectrum[i - 1]) + 10, 1), new Vector3(i, Mathf.Log(spectrum[i]) + 10, 1), Color.black); 
			//black (i,log (spectrum),1)
			Debug.DrawLine(new Vector3(Mathf.Log(i - 1), spectrum[i - 1] - 10, 1), new Vector3(Mathf.Log(i), spectrum[i] - 10, 1), Color.green); 
			//green (log(i),spectrum,1)
			Debug.DrawLine(new Vector3(Mathf.Log(i - 1), Mathf.Log(spectrum[i - 1]), 3), new Vector3(Mathf.Log(i), Mathf.Log(spectrum[i]), 3), Color.yellow); 
			//yellow (log(i),spectrum(i),1)
			all = all + spectrum[i]; 
			i++; 
//			Debug.Log (all);
		}
		if (spectrumPre [0] == 0) {
//			continue;
		} else {
			float maxRange = 0;
//			int i=0;
			int index=0;
			for(i=0;i<64;i++){
				float range = Mathf.Abs(Mathf.Log(spectrum[i])-Mathf.Log(spectrumPre[i]));
				if (range >= maxRange){
					index = i;
				}
				spectrumPre[i]=spectrum[i];
			}
			int output=0;
			/*if (index < 16) {
				output = 0;
			} else if (index < 32) {
				output = 1;
			} else if (index < 48) {
				output = 2;
			} else {
				output = 3;
			}*/
			if (index > lastIndex) {
				output = lastOutput + 1;
			} else {
				output = lastOutput - 1;
			}
			if (output < 0) {
				output += 4;
			}
			if (output > 3) {
				output -= 4;
			}
			Debug.Log(output);
			print (output);

			// generate blocks
			GameObject planeControllerObj = GameObject.Find("Plane");
			PlaneController planeControllerScript = 
				(PlaneController)planeControllerObj.GetComponent (typeof(PlaneController));
			planeControllerScript.generateBlocks (output);

			lastIndex = index;
			lastOutput = output;
		}
		//经过本人测试all值最多为1点几，所以为了表示明显，我*10，但由于会有0影响效果，所以+1 
//		print(all*10); 
		all = all * 10 + 1; 
		//利用iTween插件变换图形，关于iTween我稍后做讲述 

	} 
} 