/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

void setup() {
  Serial.begin(9600);
  for(int i=10;i<=13;i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  bool b = false;
  for(int i=10;i<=13;i++) {
    do {
      digitalWrite(i, b?HIGH:LOW);
      delay(10);
      b = !b;
      Serial.println(b);
    } while(b);
  }
}
