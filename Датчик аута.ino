int light = 0

void setup() {
  pinMode( A0, INPUT );
  pinMode( 13, OUTPUT );
}

void loop() {
  light = analogRead( pinPhoto );
  if( light < 600)
    digitalWrite( led, HIGH );
  else
    digitalWrite( led, LOW );
  delay(200);
}
