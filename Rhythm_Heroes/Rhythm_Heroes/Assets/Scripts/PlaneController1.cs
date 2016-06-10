using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlaneController1 : MonoBehaviour {

	public int index = 0;

	public static bool keepPlaying = true;
	public static int blockNumPerChannel = 5;
	public static int blockSpeed = 10;						// the smaller the val, the faster the speed
	public static float blockTimeInterval = 0.4f;			// the bigger the val, the smaller the time interval

	public static Queue<BlockWrapper> blocksInPool = new Queue<BlockWrapper>();
	public static Queue<BlockWrapper> blocksInChannel = new Queue<BlockWrapper> ();
	public GameObject prefabBlock;
	public static BlockWrapper[] blockClone;

	public static Vector3 startingPoint, endingPoint;
	public static float endingPointLocalMin = 0, touchZoneLocalMin = 0; 


	void Awake() {
		blockClone = new BlockWrapper[blockNumPerChannel];
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
		int count = 0;

		foreach(BlockWrapper tmpBlockWrapper in blocksInChannel) {
			tmpBlockWrapper.blockObj.transform.position -= this.transform.forward / blockSpeed;
			if(this.transform.InverseTransformPoint(tmpBlockWrapper.blockObj.transform.position).z 
				<= endingPointLocalMin) {
				print (index++);
				blocksInPool.Enqueue(tmpBlockWrapper);
				count++;
				tmpBlockWrapper.blockObj.transform.position = new Vector3(100, 0, 0);
				if(!tmpBlockWrapper.isScored) {
					// show words
				} else {
					tmpBlockWrapper.isScored = false;
				}
			}
		}

		while(count-- > 0) {
			blocksInChannel.Dequeue();
		}
	}

	void calculatePosition() {
		// calculate the x-coordinate of this channel
		Collider collider = GetComponent<Collider>();
		Vector3 leftBottomPoint = collider.bounds.min, rightTopPoint = collider.bounds.max;
		float planeWidth = (float)(rightTopPoint.x - leftBottomPoint.x);
		startingPoint = new Vector3 (leftBottomPoint.x + planeWidth / 2, rightTopPoint.y, rightTopPoint.z);
		endingPoint = new Vector3 (leftBottomPoint.x + planeWidth / 2, leftBottomPoint.y, leftBottomPoint.z);
		endingPointLocalMin = -(float)(this.GetComponent<Renderer> ().bounds.size [2]) / 2;
		touchZoneLocalMin = (float)(endingPointLocalMin * 0.85);
	}

	void initiateBlocks(int num) {
		for(int i=0; i<blockNumPerChannel; i++) {
			GameObject tmpObj = Instantiate (prefabBlock, new Vector3(100, 0, 0), Quaternion.identity) as GameObject;
			blockClone [i] = new BlockWrapper (tmpObj, false);
			blocksInPool.Enqueue (blockClone [i]);
		}
	}

	void generateBlocks() {
		if(blocksInPool.Count > 0) {
			BlockWrapper tmpBlockWrapper = blocksInPool.Dequeue ();
			blocksInChannel.Enqueue (tmpBlockWrapper);
			tmpBlockWrapper.blockObj.transform.position = startingPoint;
		}
	}

	IEnumerator randomGenerateBlocks() {
		while(keepPlaying) {
			generateBlocks ();
			yield return new WaitForSeconds(Random.value / blockTimeInterval);	
		}
	}
}


//public class BlockWrapper {
//	public GameObject blockObj = null;
//	public bool isScored = false;
//
//	public BlockWrapper(GameObject obj, bool val) {
//		this.blockObj = obj;
//		this.isScored = val;
//	}
//}