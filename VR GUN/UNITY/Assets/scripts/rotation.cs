using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotation : MonoBehaviour {

	
	private int speedrotate=2;
	
	
	void Update () {
		transform.Rotate (0, speedrotate, 0, Space.World);
		
	}
}
