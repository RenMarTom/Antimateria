#include <SoftwareSerial.h>

SoftwareSerial mySerial (8, 9);

void setup () {
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
  mySerial.begin(38400); //change to 9600 after checking password
  Serial.println("start prg");
 }

void loop {
  if (mySerial.available()) {
    char c = mySerial.read();
    Serial.print(c);
   }
  if (Serial.availale()) {
    char c = Serial.read();
    mySerial.write(c);
   }
 }
