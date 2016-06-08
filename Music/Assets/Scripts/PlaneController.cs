using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlaneController : MonoBehaviour {

	public bool keepPlaying = true;
	public static int blockNumPerChannel = 5;
	public static int[] blockSpeed = new int[]{30, 50, 40, 60};		// the smaller the val, the faster the speed
	public static float blockTimeInterval = 0.4f;					// the bigger the val, the smaller the time interval


	public static Queue<GameObject>[] blocksInPool = new Queue<GameObject>[4], 
	blocksInChannel = new Queue<GameObject>[4];
	public GameObject prefabBlock;
	public static GameObject[] blockClone;

	private Vector3[] startingPoints = new Vector3[4], endingPoints = new Vector3[4];
	public static float endingPointLocalMin = 0, touchZoneLocalMin = 0; 
	public int score = 0;
	public float[,] touchZone = new float[4, 4];

	void Awake() {
		blockClone = new GameObject[4 * blockNumPerChannel];
		Random.seed = 42;
		calculatePosition ();
		initiateBlocks (blockNumPerChannel);
	}


	void Start () {
		StartCoroutine(func());
	}


	void Update () {
		// make all blocks move forward; move them back to pool if they are at the ending points
		int[] count = new int[4];
		for(int i=0; i<4; i++) {
			foreach(GameObject tmpBlock in blocksInChannel[i]) {
				tmpBlock.transform.position -= this.transform.forward / blockSpeed [i];
				if(this.transform.InverseTransformPoint (tmpBlock.transform.position).z <= touchZoneLocalMin) {

					for(int j=0; j<Input.touchCount; j++) {
						Touch touch = Input.GetTouch (j);
						print (touch.position);
						if(touch.phase == TouchPhase.Began) {
							print (touch.position);
							if(touch.position.x >= touchZone[i, 0] && touch.position.x <= touchZone[i, 1] && 
								touch.position.y >= touchZone[i, 2] && touch.position.y <= touchZone[i, 3]) {
								print (++score);
							}
						}
					}
						
					blocksInPool [i].Enqueue (tmpBlock);
					tmpBlock.transform.position = new Vector3 (100, 0, 0);
					count [i]++;
				}
			}
		}

		// dequeue from blocksInChannel
		for(int i=0; i<4; i++) {
			while (count [i]-- > 0) {
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

		float touchZoneWidthStart = -(float)Screen.width + (float)(Screen.width * 0.1);
		float touchZoneWidthInterval = (float)(Screen.width * 0.8 / 4);
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
//			print (i);
//			print (touchZone[i, 0]);
//			print (touchZone[i, 1]);
//			print (touchZone[i, 2]);
//			print (touchZone[i, 3]);
		}

		// calculate the local ending position relative to plane
		endingPointLocalMin = -(float)(this.GetComponent<Renderer>().bounds.size[0]) / 2;
		touchZoneLocalMin = (float)(endingPointLocalMin * 0.9);
	}

	void initiateBlocks(int num) {
		// build 4 pools and 4 channels which contain corresponding blocks
		for(int i=0; i<4; i++) {
			blocksInPool[i] = new Queue<GameObject> ();	
			blocksInChannel [i] = new Queue<GameObject> ();
		}

		int tmpIndex = 0;
		for(int i=0; i<4; i++) {
			for(int j=0; j<blockNumPerChannel; j++) {

				// calculate the index
				tmpIndex = i * blockNumPerChannel + j;

				// initiate block
				blockClone[tmpIndex] = Instantiate (prefabBlock, 
					new Vector3(tmpIndex, 100, 0), Quaternion.identity) as GameObject;
				blocksInPool[i].Enqueue (blockClone[tmpIndex]);
			}
		}
	}

	public void generateBlocks(int channel) {
		if(blocksInPool[channel].Count > 0) {
			GameObject tmpBlock = blocksInPool [channel].Dequeue();
			blocksInChannel [channel].Enqueue (tmpBlock);
			tmpBlock.transform.position = new Vector3 (
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