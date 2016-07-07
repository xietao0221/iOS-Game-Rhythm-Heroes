using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlaneController : MonoBehaviour, AudioProcessor.AudioCallbacks {
	public static bool keepPlaying = true;
	public static int channelNum;
	public static int blockNumPerChannel = 6;
	public static int[] blockSpeed = new int[]{10, 10, 10, 10, 10};	// the smaller the val, the faster the speed
	public static int comboBonus = 5;
	public static float beatMinInterval = 0.2f;
	public static float countDownInterval = 3.0f;
	public static float superBlockInterval = 5.0f;

	public static Queue<BlockWrapper>[] blocksInPool = new Queue<BlockWrapper>[5];
	public static Queue<BlockWrapper>[] blocksInChannel = new Queue<BlockWrapper>[5];
	public static GameObject[] planeObj = new GameObject[5], touchZoneObj = new GameObject[5];
	public static GameObject note, superNote;
	public static BlockWrapper[] blockClone;
	public static BlockWrapper superBlockClone;
	private GameObject wordObj, scoreObj;
	public static Object mutex;
	private AnimationController ac;

	public static Vector3[] startingPoint = new Vector3[5];
	public static float endingPointLocalMin = 0, touchZoneLocalMin = 0; 
	private int delay = 0;
	private float timePrev = 0.0f, timeNow = 0.0f;

	private float superBlockTimePrev = 0.0f;
	public static bool isSuperBlockOnPlane = false, isSuperBlockMove = false;
	public static int superBlockPos = 5;
	private int superBlockSpeed = 5;

	void Awake() {
		timePrev = 0.0f;
		timeNow = 0.0f;
		superBlockTimePrev = 0.0f;
		isSuperBlockOnPlane = false;
		isSuperBlockMove = false;
		superBlockPos = 5;
		mutex = new Object ();
		channelNum = MenuManager.sceneNumber;
		planeObj = new GameObject[channelNum];
		touchZoneObj = new GameObject[channelNum];
		blocksInPool = new Queue<BlockWrapper>[channelNum];
		blocksInChannel = new Queue<BlockWrapper>[channelNum];
		for(int i=0; i<channelNum; i++) {
			planeObj [i] = GameObject.Find ("Plane" + i);
			touchZoneObj [i] = GameObject.Find ("TouchZone" + i);
		}
		note = GameObject.Find ("Note2");
		superNote = GameObject.Find ("Note");
		wordObj = GameObject.Find ("Word");
		scoreObj = GameObject.Find ("Score");
		blockClone = new BlockWrapper[channelNum * blockNumPerChannel];
		Random.seed = 42;
		calculatePosition ();
		initiateBlocks (blockNumPerChannel);
//		note.SendMessage ("changeMaterial", false, SendMessageOptions.RequireReceiver);
		ac = gameObject.GetComponent<AnimationController> ();
	}

	void activeBeat(){
		AudioProcessor processor = FindObjectOfType<AudioProcessor>();
		processor.addAudioCallback(this);
	}

	public void onOnbeatDetected() {
		float timeElaps = timeNow - timePrev;
		timePrev = timeNow;
		if (timeElaps < beatMinInterval) {
			return;
		}
		generateBlocks (getRandomValue (superBlockPos));
	}

	int getRandomValue(int superBlockPosParam) {
		float tmp = Random.value * channelNum;
		if(tmp <= 1) {
			if(!isSuperBlockOnPlane || (isSuperBlockOnPlane && superBlockPosParam != 0)) {
				return 0;
			} else {
				return 1;
			}
		} else if(tmp <= 2) {
			if(!isSuperBlockOnPlane || (isSuperBlockOnPlane && superBlockPosParam != 1)) {
				return 1;
			} else {
				return 2;
			}
		} else if(tmp <= 3) {
			if(!isSuperBlockOnPlane || (isSuperBlockOnPlane && superBlockPosParam != 2)) {
				return 2;
			} else {
				return 3;
			}
		} else if(channelNum >= 4 && tmp <= 4){
			if(!isSuperBlockOnPlane || (isSuperBlockOnPlane && superBlockPosParam != 3)) {
				return 3;
			} else {
				return 4;
			}
		} else {
			if(!isSuperBlockOnPlane || (isSuperBlockOnPlane && superBlockPosParam != 4)) {
				return 4;
			} else {
				return 0;
			}
		}
	}

	void FixedUpdate () {
		timeNow += Time.deltaTime;
		if (delay++ == 10) {
			activeBeat ();
		}


		// deal with super note
		if(BackgroundMusicController.music.isPlaying) {
			if(isSuperBlockOnPlane) {
				if(!isSuperBlockMove && timeNow - superBlockTimePrev >= 2.5f) {
					// block 2.5s and then begin to move
					superBlockTimePrev = timeNow;
					isSuperBlockMove = true;
				}

				if(isSuperBlockMove) {
					// move
					superBlockClone.blockObj.transform.position -= 
						planeObj[superBlockPos].transform.forward / superBlockSpeed;

					// check if it is miss
					lock(mutex) {
						if (planeObj[superBlockPos].transform.InverseTransformPoint (superBlockClone.blockObj.transform.position).z
							<= endingPointLocalMin) {
							// miss the super note
							superBlockClone.blockObj.transform.position = new Vector3 (100, 0, 0);
							superBlockTimePrev = timeNow;
							isSuperBlockOnPlane = false;
							isSuperBlockMove = false;
							scoreObj.SendMessage ("statChange", 1, SendMessageOptions.RequireReceiver);
							wordObj.SendMessage ("wordTextDisplay", 0, SendMessageOptions.RequireReceiver);
						}
					}
				}
			} else {
				if(timeNow - superBlockTimePrev >= superBlockInterval) {
					// move super note to the starting point of plane
					isSuperBlockOnPlane = true;
					superBlockTimePrev = timeNow;
					superBlockPos = getRandomValue (10);
					superBlockClone.blockObj.transform.position = startingPoint[superBlockPos];
					scoreObj.SendMessage ("statChange", 0, SendMessageOptions.RequireReceiver);
				}
			}	
		} else {
			if(isSuperBlockMove) {
				// move
				superBlockClone.blockObj.transform.position -= 
					planeObj[superBlockPos].transform.forward / superBlockSpeed;

				// check if it is miss
				lock(mutex) {
					if (planeObj[superBlockPos].transform.InverseTransformPoint (superBlockClone.blockObj.transform.position).z
						<= endingPointLocalMin) {
						superBlockClone.blockObj.transform.position = new Vector3 (100, 0, 0);
						superBlockTimePrev = timeNow;
						isSuperBlockOnPlane = false;
						isSuperBlockMove = false;
					}
				}
			}
		}


		// deal with regular note
		for(int i=0; i<channelNum; i++) {
			int[] count = new int[channelNum];
			lock(mutex) {
				foreach(BlockWrapper tmpBlockWrapper in blocksInChannel[i]) {
					tmpBlockWrapper.blockObj.transform.position -= planeObj[i].transform.forward / blockSpeed[i];
					if(planeObj[i].transform.InverseTransformPoint(tmpBlockWrapper.blockObj.transform.position).z 
						<= endingPointLocalMin) {
						// blocks are out of plane
						blocksInPool[i].Enqueue(tmpBlockWrapper);
						count [i]++;
						tmpBlockWrapper.blockObj.transform.position = new Vector3(100, 0, 0);

						// when combo >= 50, the first miss will have vibration effect
						if (TouchController.comboCount >= 50) {
							Handheld.Vibrate ();
						}

						// miss
						wordObj.SendMessage ("wordTextDisplay", 0, SendMessageOptions.RequireReceiver);
						scoreObj.SendMessage("comboChange", 0, SendMessageOptions.RequireReceiver);
						scoreObj.SendMessage ("statChange", 1, SendMessageOptions.RequireReceiver);
						TouchController.comboCount = 0;

						if(TouchController.hasChanged) {
							PlaneMaterialController.isHot = false;
							TouchZoneMaterialController.isHot = false;
							for(int j=0; j<channelNum; j++) {
								planeObj[j].SendMessage("changeMaterial", false, SendMessageOptions.RequireReceiver);
								touchZoneObj[j].SendMessage("changeMaterial", false, SendMessageOptions.RequireReceiver);
							}
							note.SendMessage ("changeMaterial", false, SendMessageOptions.RequireReceiver);
							ac.changePlaneAni (false);
							TouchController.hasChanged = false;
						}
					}
				}

				while(count[i]-- > 0) {
					blocksInChannel[i].Dequeue();
				}
			}
		}
	}

	void calculatePosition() {
		// calculate the x-coordinate of this channel
		Collider[] planeCollider = new Collider[channelNum], touchZoneCollider = new Collider[channelNum];
		Vector3[] leftBottomPoint = new Vector3[channelNum], rightTopPoint = new Vector3[channelNum];
		float[] planeWidth = new float[channelNum];
		for(int i=0; i<channelNum; i++) {
			planeCollider [i] = planeObj [i].GetComponent<Collider> ();
			touchZoneCollider [i] = touchZoneObj [i].GetComponent<Collider> ();
			leftBottomPoint [i] = planeCollider [i].bounds.min;
			rightTopPoint [i] = planeCollider [i].bounds.max;
			planeWidth[i] = (float)(rightTopPoint[i].x - leftBottomPoint[i].x);
			startingPoint[i] = new Vector3 (leftBottomPoint[i].x + planeWidth[i] / 2, rightTopPoint[i].y, rightTopPoint[i].z);
		}
		endingPointLocalMin = -(float)(planeObj[0].GetComponent<Renderer> ().bounds.size [2] + 
			touchZoneObj[0].GetComponent<Renderer>().bounds.size[2]*3) / 2;
		//		touchZoneLocalMin = -(float)(planeObj[0].GetComponent<Renderer> ().bounds.size [2]) / 2;
		touchZoneLocalMin = endingPointLocalMin * 0.85f;
	}

	void initiateBlocks(int num) {
		for(int i=0; i<channelNum; i++) {
			blocksInChannel [i] = new Queue<BlockWrapper> ();
			blocksInPool [i] = new Queue<BlockWrapper> ();
			GameObject tmpSuperBlockObj = Instantiate (superNote, new Vector3(100, 0, 0), Quaternion.identity) as GameObject;
			superBlockClone = new BlockWrapper (tmpSuperBlockObj);
			for(int j=0; j<blockNumPerChannel; j++) {
				GameObject tmpObj = Instantiate (note, new Vector3(100, 0, 0), Quaternion.identity) as GameObject;
				blockClone [i*blockNumPerChannel+j] = new BlockWrapper (tmpObj);
				blocksInPool [i].Enqueue (blockClone [i * blockNumPerChannel + j]);
			}
		}
	}

	void generateBlocks(int channel) {
		if(blocksInPool[channel].Count > 0) {
			BlockWrapper tmpBlockWrapper = blocksInPool[channel].Dequeue ();
			blocksInChannel[channel].Enqueue (tmpBlockWrapper);
			tmpBlockWrapper.blockObj.transform.position = startingPoint[channel];
			scoreObj.SendMessage ("statChange", 0, SendMessageOptions.RequireReceiver);
		}
	}
}

public class BlockWrapper {
	public GameObject blockObj = null;

	public BlockWrapper(GameObject obj) {
		this.blockObj = obj;
	}
}