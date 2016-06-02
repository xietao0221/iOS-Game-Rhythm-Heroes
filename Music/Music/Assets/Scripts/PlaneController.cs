using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlaneController : MonoBehaviour {

	public static int blockNumPerChannel = 5;
	public Queue<GameObject>[] queueBlocks = new Queue<GameObject>[4];
	public GameObject prefabBlock;
	public GameObject[] blockClone = new GameObject[blockNumPerChannel * 4];
	public MeshRenderer[] rendererBlock = new MeshRenderer[4];

	private Vector3[] startingPoints = new Vector3[4], endingPoints = new Vector3[4];
	private int[] speed = new int[]{50, 40, 30, 20};


	void Awake() {
		buildBlocksPool (blockNumPerChannel);
	}
		

	void Start () {

	}


	void Update () {
		for(int i=0; i<4; i++) {
			blockClone [i].transform.position -= this.transform.forward / speed [i];
		}

		if (Input.anyKeyDown) {
			if (Input.GetKeyDown (KeyCode.A)) {
				generateBlocks (0);
			} else if(Input.GetKeyDown (KeyCode.S)) {
				generateBlocks (1);
			} else if(Input.GetKeyDown (KeyCode.D)) {
				generateBlocks (2);
			} else if(Input.GetKeyDown (KeyCode.F)) {
				generateBlocks (3);
			}
		}
	}


//	void InitSphere() {
//		Instantiate (prefabSphere, new Vector3(0, 5, 5), Quaternion.identity);
//	}


	void buildBlocksPool(int num) {
		// build 4 queues for 4 channals
		for(int i=0; i<4; i++) {
			queueBlocks[i] = new Queue<GameObject> ();	
		}

		// calculate the x-coordinate of 4 channels
		Collider collider = GetComponent<Collider> ();
		Vector3 leftBottomPoint = collider.bounds.min, rightTopPoint = collider.bounds.max;
		float len = (float)((rightTopPoint.x - leftBottomPoint.x) * 0.8);
		leftBottomPoint.x += len / 8;
		rightTopPoint.x -= len / 8;

		for(int i=0; i<4; i++) {
			// calculate position
			startingPoints [i] = new Vector3 (leftBottomPoint.x + i * len / 3, rightTopPoint.y, rightTopPoint.z);
			endingPoints [i] = new Vector3 (leftBottomPoint.x + i * len / 3, leftBottomPoint.y, leftBottomPoint.z);

			// create obj
			blockClone[i] = Instantiate (prefabBlock, startingPoints[i], Quaternion.identity) as GameObject;

			// Color
			rendererBlock[i] = blockClone[i].gameObject.GetComponent<MeshRenderer> () as MeshRenderer;
			if(i == 0) rendererBlock[i].material.color = Color.red;
			else if(i == 1) rendererBlock[i].material.color = Color.black;
			else if(i == 2) rendererBlock[i].material.color = Color.green;
			else rendererBlock[i].material.color = Color.blue;

			//			queueSphere.Enqueue (sphereClone[i]);
		}
	}

	void generateBlocks(int channel) {
		print (channel);
	}

}
