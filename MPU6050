#include "MPU6050.h"
MPU6050 mpu;
void setup() {
  Wire.begin();
  Serial.begin(9600);
  mpu.initialize();     // запускаем датчик
}
void loop() {
  int16_t ax = mpu.getAccelerationX(); 
  int16_t ay = mpu.getAccelerationY();
  int16_t az = mpu.getAccelerationZ(); // ускорение по оси Х
  // стандартный диапазон: +-2g
  ax = constrain(ax, -16384, 16384);
  ay = constrain(ay, -16384, 16384);
  az = constrain(az, -16384, 16384);    // ограничиваем +-1g
  float angle = ax / 16384.0;
  float angley = ay / 16384.0;
  float anglez = az / 16384.0;           // переводим в +-1.0
  // и в угол через арксинус
  if (angle < 0) angle = 90 - degrees(acos(angle));
  else angle = degrees(acos(-angle)) - 90;
  Serial.print(angle);
  Serial.print(" ");
  Serial.print(angley);
  Serial.print(" ");
  Serial.println(anglez);
  delay(5);
}
