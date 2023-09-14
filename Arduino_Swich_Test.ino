#include <SoftwareSerial.h>
#define Hall_Sensor 10
SoftwareSerial BT(A0, A1);
void setup() {
  pinMode(Hall_Sensor, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  BT.begin(9600);
  Serial.begin(9600);
}

void loop() {
  int val = digitalRead(Hall_Sensor);
  Serial.println(val);
  if(val == LOW){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
  delay(100);
}
