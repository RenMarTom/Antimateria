// Convenience macro that combines TextOut and NumOut
#define TextNumOut(xPos,yPos,str,col,num)  TextOut(xPos,yPos,str); \
                                           NumOut(xPos+6*col,yPos,num)
void delay(int a){
Wait(a);
}
task main()
{bool x = true;
int heading1;          //heading (0-359 value)
SetSensorLowspeed(IN_2);             //compass sensor in port 2
SetSensorLowspeed(S1);
SetSensorColorRed(S3);
  int dir, s1, s2, s3, s4, s5, result, u = 0;
    heading1 = SensorHTCompass(IN_2); // get current heading
    int azimut = heading1;
    bool flagat;
  SetSensorLowspeed(IRSEEKER);
    int UP;  OnFwd(OUT_BC, -100);delay(800);
  while(true) {
    ReadSensorHTIRSeeker2AC(IRSEEKER, dir, s1, s2, s3, s4, s5);
    heading1 = SensorHTCompass(IN_2); // get current heading
    UP = (heading1 + 540 - azimut) % 360 - 180;
    TextNumOut(0, LCD_LINE3, "Dir:    ",4,dir); // ëåíÿ ïðèâåò
    TextNumOut(6, LCD_LINE4, "S1:     ",3,s1);
    TextNumOut(6, LCD_LINE5, "S2:     ",3,s2);
    TextNumOut(6, LCD_LINE6, "S3:     ",3,s3);
    TextNumOut(6, LCD_LINE7, "S4:     ",3,s4);
    TextNumOut(6, LCD_LINE8, "S5:     ",3,s5);
 delay(1);
 int s = s1 + s2 + s3 + s4 + s5;


if(SENSOR_3 >= 17)
{ if(UP > 30 || UP < (-30)){
OnFwd(OUT_B, 100);
OnFwd(OUT_C, 100);
delay(750);
OnFwd(OUT_A, 100);
delay(100);
Off(OUT_ABC);
delay(4000);
}else{
OnFwd(OUT_A,-100);
delay(100);
OnFwd(OUT_B, 100);
OnFwd(OUT_C, 100);
delay(750);
OnFwd(OUT_A, 100);
Off(OUT_BC);

delay(4000);}
} else{


//B - leftMotor C-Right Motor
u = dir - 5; //4 -4
 OnFwd(OUT_B, 25 * (-u));
 OnFwd(OUT_C, 25 * u);
 if(u == 0){
 OnFwd(OUT_B, -100);
 OnFwd(OUT_C, -100);
 if(SENSOR_3 >= 17)
{ if(UP > 30 || UP < (-30)){
OnFwd(OUT_B, 96);
OnFwd(OUT_C, 100);
delay(750);
OnFwd(OUT_A, 100);
delay(100);
Off(OUT_A);
}else{
OnFwd(OUT_A,-100);
delay(100);
OnFwd(OUT_B, 100);
OnFwd(OUT_C, 100);
delay(750);
OnFwd(OUT_A, 100);
Off(OUT_BC);

delay(4000);  }}
//           if(UP < (-79)){
//      OnFwd(OUT_ABC, 100);

//}   else if(UP > 79){OnFwd(OUT_ABC, 100);
//}  else{
//                  OnFwd(OUT_BC, -100);}

 if(s > 115){
           if((UP > (-6) && UP < 6) && x == true){ OnFwd(OUT_A, 100);
           OnFwd(OUT_BC, -100);
            delay(200);
           Off(OUT_BC);
           OnFwd(OUT_A, -100);
           delay(100);
           OnFwd(OUT_A, 100);

           flagat = true;
          x = false;}
  else{  flagat = false;      x = true;
               OnFwd(OUT_A, 100);
               if(UP > 6){ OnFwd(OUT_C, -100);
          OnFwd(OUT_B, 10);

                 }
         else if(UP < 6){OnFwd(OUT_B, -100);
          OnFwd(OUT_C 10);

                 }
           /*while(TRUE){
               heading1 = SensorHTCompass(IN_2);
               UP = (heading1 + 540 - azimut) % 360 - 180;
               ReadSensorHTIRSeeker2AC(IRSEEKER, dir, s1, s2, s3, s4, s5);
               s = s1 + s2 + s3 + s4 + s5;
               if(dir == 5)
               OnFwd(OUT_BC, -100);
               if(s < 50){
               x = false;
               }
               if(UP < 5 && UP > (-5)){
               OnFwd(OUT_A, -100);
               Wait(100);
               OnFwd(OUT_A, 100);
               break;}
               OnFwd(OUT_A, 100);
               OnFwd(OUT_C, -100);
               OnFwd(OUT_B, 0);                }


                                  */ }
    }else{Off(OUT_A);
    if(u == 0){
    OnFwd(OUT_BC, -100); } }  } }

//if(UP < (-10) && UP > (-40)){
//OnFwd(OUT_C, 50);
//OnFwd(OUT_B, 50));}
//else if(UP > 10 && UP < 40 ){
//OnFwd(OUT_B, 50);
//OnFwd(OUT_C, (-50));
//}

   }  }
