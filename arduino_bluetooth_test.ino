#include <SoftwareSerial.h>
SoftwareSerial BT(A0, A1);
void setup() {
  BT.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    BT.write(Serial.read());
  }
  if(BT.available()){
    Serial.write(BT.read());
  }
}
