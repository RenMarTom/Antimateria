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
 int a, b, n, st, sr;
  a = 213;
  b = 152;
  digitalWrite(PIN_TRIG, LOW);
  delayMicroseconds(5);
  digitalWrite(PIN_TRIG, HIGH);

  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);

  duration = pulseIn(PIN_ECHO, HIGH);
  delay(50);
  digitalWrite(PIN_TRIG, LOW);
  delayMicroseconds(5);
  digitalWrite(PIN_TRIG, HIGH);

  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);

  duration1 = pulseIn(PIN_ECHO1, HIGH);
  delay(50);
  digitalWrite(PIN_TRIG1, LOW);
  delayMicroseconds(5);
  digitalWrite(PIN_TRIG1, HIGH);

  delayMicroseconds(10);
  digitalWrite(PIN_TRIG1, LOW);

  duration2 = pulseIn(PIN_ECHO2, HIGH);
  delay(50);

  s2 = (duration / 2) / 29.1;
  s1 = (duration1 / 2) / 29.1; //смотрит вбок
  s3 = (duration2 / 2) / 29.1; //смотрит назад
  
  // sr - номер строки от 0 
  sr = s3 / (a / 3); 
  //st - номер столбца от 0 
  st = s1 / (b / 4);
  //номер сектора 
  n = sr * 4 + st;
  Serial.print(s3);
  Serial.print(" ");
  Serial.print(sr);
  Serial.print(" - ");
  Serial.print(s1);
  Serial.print(" ");
  Serial.print(st);
  Serial.print(" ");
  Serial.println(n);
  
  delay(50);
  
}
