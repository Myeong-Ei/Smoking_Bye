/*
  리미트 스위치 전용
 */
#include <SoftwareSerial.h>
SoftwareSerial BT(A0, A1);
#define SWITCH 10
void setup() {
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(SWITCH, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() {
  if(BT.available() > 0){
    char data = BT.read();
  }
  int val = digitalRead(SWITCH);
  Serial.println(val);
  if(val == LOW){
    BT.write('P');
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
  delay(1000);
}
