using UnityEngine;
using System.Collections;

public class Rotator : MonoBehaviour {

    Rigidbody2D rid;
	// Use this for initialization
	void Start () {
        rid = gameObject.GetComponent<Rigidbody2D>();
	}
	
	// Update is called once per frame
	void Update () {
        rid.angularVelocity = 50;
	}
}
