using UnityEngine;
using System.Collections;
// Awake() Start() 初始化
// Instantiate 创建game object
// Update() LateUpdate() FixedUpdate() 更新逻辑
// GetComponment 找到其他的脚本
// GameObject.find 找到其他的物品

public class sphereControl : MonoBehaviour {

	public GameObject Sphere;

	// Use this for initialization
	public float timeStart = -1;
	public float timeLong = 100;
	public float speed = 10;
	public float timeNow = 10;

	void Start () {
		GameObject plane = GameObject.Find ("Plane");
		this.transform.forward = plane.transform.forward;
		timeStart = Time.time;
	}

	// Update is called once per frame
	void Update () {
		transform.position = transform.position - transform.forward/speed;
		timeNow = Time.time;
		if (Time.time-timeStart>timeLong) {
			Debug.Log (Time.time);
			Debug.Log ("->");
			Debug.Log (timeStart);
			Destroy (gameObject);
		}
	}
}
