#include <Servo.h>
Servo motor;//any name to servo motor
int tr=12, ec=11;//pin for sensor
int xo=0;//xo is duration
int Dis=0;//Dis is distance
void setup()
{
  motor.attach(5);//attachs servo to pin 5
  pinMode(tr,OUTPUT);
  pinMode(ec,INPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(tr,LOW);
  delayMicroseconds(4);
  
  digitalWrite(tr,HIGH);
  delayMicroseconds(14);
  digitalWrite(tr,LOW);

  
  xo =(ec,HIGH);
  Dis=xo*0.040/2;//determining the distance from carton to sensor in cm
  Serial.print("Distance");
  Serial.println(Dis);
  if (Dis<300 && Dis>200){motor.write(150);}//range for small box
  else if(Dis<199 && Dis>100){motor.write(90);} //range for midum box
  else if(Dis<99 && Dis>0){motor.write(45);}//rangr for big box
  }
