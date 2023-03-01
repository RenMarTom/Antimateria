int led = 9;           // Пин, к которому подключён затвор транзистора
int brightness = 0;    // Теперь эта переменная отвечает за скорость вращения
int fadeAmount = 5;    // Шаг изменения скорости
 
void setup()
{ 
  // Настраиваем цифровой пин 9 на вывод
  pinMode(led, OUTPUT);
} 
 
void loop()
{ 
  // Устанавливаем скорость вращения мотора
  analogWrite(led, brightness);    
 
  // Увеличиваем текущее значение скорости вращения
  brightness = brightness + fadeAmount;
 
  // Когда скорость становится максимальной/минимальной — начинаем её снижать/повышать 
  if (brightness == 0 || brightness == 255)
  {
    fadeAmount = -fadeAmount ; 
  }     
  // Пауза 30 миллисекунд    
  delay(30);                            
}
