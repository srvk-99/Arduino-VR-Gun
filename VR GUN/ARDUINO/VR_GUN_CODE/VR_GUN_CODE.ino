#include<Wire.h>
const int MPU6050_addr=0x68;
float AccX,AccY,AccZ;
int16_t GyroX,GyroY,GyroZ,Temp;
void setup(){
  Wire.begin();
  Wire.beginTransmission(MPU6050_addr);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);
  Serial.begin(9600);
}
void loop(){
  Wire.beginTransmission(MPU6050_addr);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU6050_addr,14,true);
  AccX=Wire.read()<<8|Wire.read();
  AccY=Wire.read()<<8|Wire.read();
  AccZ=Wire.read()<<8|Wire.read();
  Temp=Wire.read()<<8|Wire.read();
  GyroX=Wire.read()<<8|Wire.read();
  GyroY=Wire.read()<<8|Wire.read();
  GyroZ=Wire.read()<<8|Wire.read();

  
   Serial.println(1);
   delay(10);
   Serial.println((AccZ*1000)/16384);
   delay(10);
   Serial.println(2);
   delay(10);
   Serial.println((AccY*1000)/16384);

   
   
  
  delay(70);
}
