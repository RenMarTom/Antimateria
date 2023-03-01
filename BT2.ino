int val;

void setup()

{

  Serial.begin(9600);

  pinMode(13, OUTPUT); // 13 пин – светодиод, объявляется как выход

}

void loop()

{

  if (Serial.available()) { // проверка поданных команд 
    val = Serial.read();

  if (val == '1') {digitalWrite(13, HIGH);} // при 1 включается светодиод

  if (val == '0') {digitalWrite(13, LOW);}  // при 0 выключается светодиод

 }
}
