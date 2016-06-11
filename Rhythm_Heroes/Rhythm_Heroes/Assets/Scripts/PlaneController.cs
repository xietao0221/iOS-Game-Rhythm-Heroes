using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlaneController : MonoBehaviour {
	public static bool keepPlaying = true;
	public static int blockNumPerChannel = 5;
	public static int[] blockSpeed = new int[]{10, 10, 10, 10};			// the smaller the val, the faster the speed
	public static float blockTimeInterval = 1f;				// the bigger the val, the smaller the time interval

	public static Queue<BlockWrapper>[] blocksInPool = new Queue<BlockWrapper>[4];
	public static Queue<BlockWrapper>[] blocksInChannel = new Queue<BlockWrapper>[4];
	public GameObject prefabBlock;
	public GameObject[] planeObj = new GameObject[4];
	public static BlockWrapper[] blockClone;

	public static Vector3[] startingPoint = new Vector3[4], endingPoint = new Vector3[4];
	public static float endingPointLocalMin = 0, touchZoneLocalMin = 0; 


	void Awake() {
		for(int i=0; i<4; i++) {
			planeObj [i] = GameObject.Find ("Plane" + i);
		}
		blockClone = new BlockWrapper[4 * blockNumPerChannel];
		Random.seed = 42;
		calculatePosition ();
		initiateBlocks (blockNumPerChannel);
	}

	// Use this for initialization
	void Start () {
		StartCoroutine(randomGenerateBlocks());
	}

	// Update is called once per frame
	void Update () {
		int[] count = new int[4];

		for(int i=0; i<4; i++) {
			foreach(BlockWrapper tmpBlockWrapper in blocksInChannel[i]) {
				tmpBlockWrapper.blockObj.transform.position -= planeObj[i].transform.forward / blockSpeed[i];
				if(planeObj[i].transform.InverseTransformPoint(tmpBlockWrapper.blockObj.transform.position).z 
					<= endingPointLocalMin) {
					blocksInPool[i].Enqueue(tmpBlockWrapper);
					count [i]++;
					tmpBlockWrapper.blockObj.transform.position = new Vector3(100, 0, 0);
					if(!tmpBlockWrapper.isScored) {
						// show words
					} else {
						tmpBlockWrapper.isScored = false;
					}
				}
			}	
		}
			
		for(int i=0; i<4; i++) {
			while(count[i]-- > 0) {
				blocksInChannel[i].Dequeue();
			}	
		}
	}

	void calculatePosition() {
		// calculate the x-coordinate of this channel
		Collider[] collider = new Collider[4];
		Vector3[] leftBottomPoint = new Vector3[4], rightTopPoint = new Vector3[4];
		float[] planeWidth = new float[4];
		for(int i=0; i<4; i++) {
			collider [i] = planeObj [i].GetComponent<Collider> ();
			leftBottomPoint [i] = collider [i].bounds.min;
			rightTopPoint [i] = collider [i].bounds.max;
			planeWidth[i] = (float)(rightTopPoint[i].x - leftBottomPoint[i].x);
			startingPoint[i] = new Vector3 (leftBottomPoint[i].x + planeWidth[i] / 2, rightTopPoint[i].y, rightTopPoint[i].z);
			endingPoint[i] = new Vector3 (leftBottomPoint[i].x + planeWidth[i] / 2, leftBottomPoint[i].y, leftBottomPoint[i].z);
		}
		endingPointLocalMin = -(float)(planeObj[0].GetComponent<Renderer> ().bounds.size [2]) / 2;
		touchZoneLocalMin = (float)(endingPointLocalMin * 0.85);
	}

	void initiateBlocks(int num) {
		for(int i=0; i<4; i++) {
			blocksInChannel [i] = new Queue<BlockWrapper> ();
			blocksInPool [i] = new Queue<BlockWrapper> ();
			for(int j=0; j<blockNumPerChannel; j++) {
				GameObject tmpObj = Instantiate (prefabBlock, new Vector3(100, 0, 0), Quaternion.identity) as GameObject;
				blockClone [i*blockNumPerChannel+j] = new BlockWrapper (tmpObj, false);
				blocksInPool[i].Enqueue (blockClone [i*blockNumPerChannel+j]);
			}
		}
	}

	void generateBlocks(int channel) {
		if(blocksInPool[channel].Count > 0) {
			BlockWrapper tmpBlockWrapper = blocksInPool[channel].Dequeue ();
			blocksInChannel[channel].Enqueue (tmpBlockWrapper);
			tmpBlockWrapper.blockObj.transform.position = startingPoint[channel];
		}
	}

	IEnumerator randomGenerateBlocks() {
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