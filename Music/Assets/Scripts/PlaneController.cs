using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlaneController : MonoBehaviour {

	public bool keepPlaying = true;
	public static int blockNumPerChannel = 5;
	public static int[] blockSpeed = new int[]{10, 10, 10, 10};		// the smaller the val, the faster the speed
	public static float blockTimeInterval = 0.4f;					// the bigger the val, the smaller the time interval


	public static Queue<BlockWrapper>[] blocksInPool = new Queue<BlockWrapper>[4];
	public static Queue<BlockWrapper>[] blocksInChannel = new Queue<BlockWrapper>[4];
	public GameObject prefabBlock;
	public static BlockWrapper[] blockClone;

	private Vector3[] startingPoints = new Vector3[4], endingPoints = new Vector3[4];
	private GameObject wordTextObj;
	public static float endingPointLocalMin = 0, touchZoneLocalMin = 0; 
	public static int score = 0;
	public static float[,] touchZone = new float[4, 4];

	void Awake() {
		blockClone = new BlockWrapper[4 * blockNumPerChannel];
		Random.seed = 42;
		calculatePosition ();
		initiateBlocks (blockNumPerChannel);
	}


	void Start () {
		wordTextObj = GameObject.Find ("WordText");
		StartCoroutine(func());
	}


	void Update () {
		// make all blocks move forward; move them back to pool if they are at the ending points
		int[] count = new int[4];
		for(int i=0; i<4; i++) {
			foreach(BlockWrapper tmpBlockWrapper in blocksInChannel[i]) {
				tmpBlockWrapper.blockObj.transform.position -= this.transform.forward / blockSpeed [i];
				if(this.transform.InverseTransformPoint (tmpBlockWrapper.blockObj.transform.position).z <= 
					endingPointLocalMin) {
					blocksInPool [i].Enqueue (tmpBlockWrapper);
					count [i]++;
					tmpBlockWrapper.blockObj.transform.position = new Vector3 (100, 0, 0);
					if(!tmpBlockWrapper.isScored) {
						((ScoreController)(wordTextObj.GetComponent (typeof(ScoreController)))).wordTextDisplay(2);
					} else {
						tmpBlockWrapper.isScored = false;	
					}
				}
			}
		}

		for(int i=0; i<4; i++) {
			while(count[i]-- > 0) {
				blocksInChannel [i].Dequeue ();
			}
		}
	}


	void calculatePosition() {
		// calculate the x-coordinate of 4 channels
		Collider collider = GetComponent<Collider> ();
		Vector3 leftBottomPoint = collider.bounds.min, rightTopPoint = collider.bounds.max;
		float planeWidth = (float)((rightTopPoint.x - leftBottomPoint.x) * 0.8);
		leftBottomPoint.x += planeWidth / 8;
		rightTopPoint.x -= planeWidth / 8;

		float touchZoneWidthStart = -(float)Screen.width + (float)(Screen.width * 0.05);
		float touchZoneWidthInterval = (float)(Screen.width * 0.9 / 4);
		float touchZoneHeightStart = (float)(Screen.height * 0.2);

		for(int i=0; i<4; i++) {
			// calculate the starting position and ending position
			startingPoints [i] = new Vector3 (leftBottomPoint.x + i * planeWidth / 3, rightTopPoint.y, rightTopPoint.z);
			endingPoints [i] = new Vector3 (leftBottomPoint.x + i * planeWidth / 3, leftBottomPoint.y, leftBottomPoint.z);

			// calculate the screen position
			touchZone [i, 0] = touchZoneWidthStart + i * touchZoneWidthInterval;
			touchZone [i, 1] = touchZoneWidthStart + (i + 1) * touchZoneWidthInterval;
			touchZone [i, 2] = 0;
			touchZone [i, 3] = touchZoneHeightStart;
		}

		// calculate the local ending position relative to plane
		endingPointLocalMin = -(float)(this.GetComponent<Renderer>().bounds.size[0]) / 2;
		touchZoneLocalMin = (float)(endingPointLocalMin * 0.9);
	}

	void initiateBlocks(int num) {
		// build 4 pools and 4 channels which contain corresponding blocks
		for(int i=0; i<4; i++) {
			blocksInPool[i] = new Queue<BlockWrapper> ();	
			blocksInChannel [i] = new Queue<BlockWrapper> ();
		}

		int tmpIndex = 0;
		for(int i=0; i<4; i++) {
			for(int j=0; j<blockNumPerChannel; j++) {
				// calculate the index
				tmpIndex = i * blockNumPerChannel + j;

				// initiate block
				GameObject tmpObj = Instantiate (prefabBlock, 
					new Vector3(tmpIndex, 100, 0), Quaternion.identity) as GameObject;
				blockClone [tmpIndex] = new BlockWrapper (tmpObj, false);

				// enqueue
				blocksInPool[i].Enqueue (blockClone[tmpIndex]);
			}
		}
	}

	public void generateBlocks(int channel) {
		if(blocksInPool[channel].Count > 0) {
			BlockWrapper tmpBlockWrapper = blocksInPool [channel].Dequeue();
			blocksInChannel [channel].Enqueue (tmpBlockWrapper);
			tmpBlockWrapper.blockObj.transform.position = new Vector3 (
				startingPoints [channel].x, startingPoints [channel].y, startingPoints [channel].z);
		}
	}

	IEnumerator func() {
		while(keepPlaying) {
			float tmp = Random.value * 4;
			if(tmp <= 1) {
				generateBlocks (0);
			} else if(tmp <= 2) {
				generateBlocks (1);
			} else if(tmp <= 3) {
				generateBlocks (2);
			} else {
				generateBlocks (3);
			}
			yield return new WaitForSeconds(Random.value / blockTimeInterval);	
		}
	}
}

public class BlockWrapper {
	public GameObject blockObj = null;
	public bool isScored = false;

	public BlockWrapper(GameObject obj, bool val) {
		this.blockObj = obj;
		this.isScored = val;
	}
}