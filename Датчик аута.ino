int light = 0;
int pinPhoto = A0;
int Led = 13;

void setup() {
  pinMode(pinPhoto, INPUT );
  pinMode(Led, OUTPUT );
  Serial.begin(9600);
}

void loop() {
  digitalWrite(Led, OUTPUT);
  light = analogRead( pinPhoto );
  if (light < 300)
  {
     Serial.println("WHITE");
  }
  else
  {
     Serial.println("NOT WHITE");
  }
   delay(200);
}
   
