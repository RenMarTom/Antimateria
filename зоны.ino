#define PIN_ECHO 9
#define PIN_TRIG 10
#define PIN_ECHO1 11
#define PIN_TRIG1 12
#define PIN_ECHO2 8
#define PIN_TRIG2 7

long duration, cm;
long duration1, cm1;
long duration2, cm2;

void setup() {

  Serial.begin(9600);
  
  pinMode(PIN_TRIG, OUTPUT);
  pinMode(PIN_ECHO, INPUT);
  pinMode(PIN_TRIG1, OUTPUT);
  pinMode(PIN_ECHO1, INPUT);
  pinMode(PIN_TRIG2, OUTPUT);
  pinMode(PIN_ECHO2, INPUT);  
}

void loop() {
 float s1, s2, s3;
  digitalWrite(PIN_TRIG, LOW);
  delayMicroseconds(5);
  digitalWrite(PIN_TRIG, HIGH);

  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);

  duration = pulseIn(PIN_ECHO, HIGH);

  digitalWrite(PIN_TRIG1, LOW);
  delayMicroseconds(5);
  digitalWrite(PIN_TRIG1, HIGH);

  delayMicroseconds(10);
  digitalWrite(PIN_TRIG1, LOW);

  duration1 = pulseIn(PIN_ECHO1, HIGH);

  digitalWrite(PIN_TRIG2, LOW);
  delayMicroseconds(5);
  digitalWrite(PIN_TRIG2, HIGH);

  delayMicroseconds(10);
  digitalWrite(PIN_TRIG2, LOW);

  duration2 = pulseIn(PIN_ECHO2, HIGH);

  

  s2 = (duration / 2) / 29.1;
  s1 = (duration1 / 2) / 29.1;
  s3 = (duration2 / 2) / 29.1;

  //зоны 1, 2, 3, 4
  if ((s3 >= 150)&&(s3 <= 210)) {
    if ((s1 >= 30)&&(s1 <= 60)) {
      Serial.println ("1");
   }
    else if ((s1 >= 62)&&(s1 <= 90)) {
      Serial.println ("2");
   }
    else if ((s1 >= 92)&&(s1 <= 120)) {
      Serial.println ("3");
   }
    else if ((s1 >= 122)&&(s1 <= 150)) {
      Serial.println ("4");
   }
    else {
      Serial.println ("ERROR!!!");
    }
  }
  //зоны 5, 6, 7, 8
  else if ((s3 >= 90)&&(s3 <= 148)) {
    if ((s1 >= 30)&&(s1 <= 60)) {
      Serial.println ("5");
   }
    else if ((s1 >= 62)&&(s1 <= 90)) {
      Serial.println ("5");
   }
    else if ((s1 >= 92)&&(s1 <= 120)) {
      Serial.println ("7");
   }
    else if ((s1 >= 122)&&(s1 <= 150)) {
      Serial.println ("8");
   }
    else {
      Serial.println ("ERROR!!!");
    }
  }
  //зоны 9, 10, 11, 12
  else if ((s3 >= 30)&&(s3 <= 88)) {
    if ((s1 >= 30)&&(s1 <= 60)) {
      Serial.println ("9");
   }
    else if ((s1 >= 62)&&(s1 <= 90)) {
      Serial.println ("10");
   }
    else if ((s1 >= 92)&&(s1 <= 120)) {
      Serial.println ("11");
   }
    else if ((s1 >= 122)&&(s1 <= 150)) {
      Serial.println ("12");
   }
    else {
      Serial.println ("ERROR!!!");
    }
  }
  else {
    Serial.println ("ERROR!");
  }

  delay(2000);
}
