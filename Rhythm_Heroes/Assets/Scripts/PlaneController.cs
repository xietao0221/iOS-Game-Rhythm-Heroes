using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlaneController : MonoBehaviour, AudioProcessor.AudioCallbacks {
	public static bool keepPlaying = true;
	public static int channelNum = 5;
	public static int blockNumPerChannel = 6;
	public static int[] blockSpeed = new int[]{10, 10, 10, 10, 10};			// the smaller the val, the faster the speed

	public static Queue<BlockWrapper>[] blocksInPool = new Queue<BlockWrapper>[5];
	public static Queue<BlockWrapper>[] blocksInChannel = new Queue<BlockWrapper>[5];
	public GameObject prefabBlock;
	public GameObject[] planeObj = new GameObject[5], touchZoneObj = new GameObject[5];
	public static BlockWrapper[] blockClone;
	private GameObject wordObj, scoreObj;
	public static Object mutex;

	public static Vector3[] startingPoint = new Vector3[5];
	public static float endingPointLocalMin = 0, touchZoneLocalMin = 0; 
	private int delay = 0;

	void Awake() {
		mutex = new Object ();
		GameObject[] tmpPlaneObj = new GameObject[5], tmpTouchZoneObj = new GameObject[5];
		for(int i=0; i<5; i++) {
			tmpPlaneObj [i] = GameObject.Find ("Plane" + i);
			tmpTouchZoneObj [i] = GameObject.Find ("TouchZone" + i);
			if(tmpPlaneObj[i] == null) {
				channelNum = i;
				blocksInPool = new Queue<BlockWrapper>[channelNum];
				blocksInChannel = new Queue<BlockWrapper>[channelNum];
				planeObj = new GameObject[channelNum];
				touchZoneObj = new GameObject[channelNum];
				for(int j=0; j<channelNum; j++) {
					planeObj [j] = tmpPlaneObj [j];
					touchZoneObj [j] = tmpTouchZoneObj [j];
				}
				break;
			}
			if(i == 4 && tmpPlaneObj[4] != null) {
				planeObj = new GameObject[channelNum];
				touchZoneObj = new GameObject[channelNum];
				for(int j=0; j<channelNum; j++) {
					planeObj [j] = tmpPlaneObj [j];
					touchZoneObj [j] = tmpTouchZoneObj [j];
				}
			}
		}

		wordObj = GameObject.Find ("Word");
		scoreObj = GameObject.Find ("Score");
		blockClone = new BlockWrapper[channelNum * blockNumPerChannel];
		Random.seed = 42;
		calculatePosition ();
		initiateBlocks (blockNumPerChannel);
	}


	void activeBeat(){
		AudioProcessor processor = FindObjectOfType<AudioProcessor>();
		processor.addAudioCallback(this);
	}

	public void onOnbeatDetected() {
		float tmp = Random.value * channelNum;
		if(tmp <= 1) {
			generateBlocks (0);
		} else if(tmp <= 2) {
			generateBlocks (1);
		} else if(tmp <= 3) {
			generateBlocks (2);
		} else if(channelNum >= 4 && tmp <= 4){
			generateBlocks (3);
		} else {
			generateBlocks (4);
		}
	}

	void FixedUpdate () {
		if (delay++ == 10) {
			activeBeat ();
		}
			
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

						// miss
						wordObj.SendMessage ("wordTextDisplay", 0, SendMessageOptions.RequireReceiver);
						scoreObj.SendMessage("comboChange", 0, SendMessageOptions.RequireReceiver);
						scoreObj.SendMessage ("statChange", 1, SendMessageOptions.RequireReceiver);

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
			for(int j=0; j<blockNumPerChannel; j++) {
				GameObject tmpObj = Instantiate (prefabBlock, new Vector3(100, 0, 0), Quaternion.identity) as GameObject;
				blockClone [i*blockNumPerChannel+j] = new BlockWrapper (tmpObj);
				blocksInPool[i].Enqueue (blockClone [i*blockNumPerChannel+j]);
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