using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO.Ports;

public class CubeMovement : MonoBehaviour {
	public float AmountToMove;
	SerialPort Serial=new SerialPort ("COM4",9600);


	// Use this for initialization
	void Start () {
		
	}
	

	void Update () {
		if(!Serial.IsOpen)
		Serial.Open();
		
		float data = float.Parse (Serial.ReadLine ());

			if (data >0.4) {
				transform.Translate (Vector3.left * AmountToMove, Space.World);
			}
			if (data <-0.2) {
				transform.Translate (Vector3.right * AmountToMove, Space.World);
			}






		}
	
	

}

