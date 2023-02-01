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

  

  cm = (duration / 2) / 29.1;
  cm1 = (duration1 / 2) / 29.1;
  cm2 = (duration2 / 2) / 29.1;

  Serial.print("Sensor - 1: ");
  Serial.println(cm);
  Serial.print("Sensor - 2: ");
  Serial.println(cm1);
  Serial.print("Sensor - 3: ");
  Serial.println(cm2);
  

  delay(250);
}
