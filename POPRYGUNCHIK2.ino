 #define IRSEEKER IN_1

// Convenience macro that combines TextOut and NumOut
#define TextNumOut(xPos,yPos,str,col,num)  TextOut(xPos,yPos,str); \
                                           NumOut(xPos+6*col,yPos,num)
task main()
{
int d;

int heading1, azimut;
SetSensorLowspeed(IN_4);
SetSensorColorRed(S3);
SetSensorColorRed(S2);
SetSensorLowspeed(IN_1);
  int dir, s1, s2, s3, s4, s5, result;
    heading1 = SensorHTCompass(IN_4);
    azimut = heading1;
 SetSensorLowspeed(IRSEEKER);
    int UP;
    int Us;
    int red;
    //int zeP;
    //int zeZ;
    //zeZ = SENSOR_2;
    //zeP = SENSOR_3;
     /* OnFwd(OUT_BC, 90);
     if(SENSOR_3>10)
     Off(OUT_BC);
      OnFwd(OUT_BC, -90);
      Wait(700);
      OnFwd(OUT_B, 30);
     OnFwd(OUT_C, -30);
     Wait(600); */

  while(UP < (-85) && Up > (-95) || UP > 85 && UP < 95)  {
   OnFwd(OUT_B, -50);
   OnFwd(OUT_C, 50);
  }    
 while(S3 < 5) {
  OnFwd(OUT_BC, -100); }
 while(UP < 5 || UP < (-6)) {
  OnFwd(OUT_B, -50);
  OnFwd(OUT_C, 50);
 }
  while(1)
{
  Us=SENSOR_2;
red=SENSOR_3;

   if(Us > 15)
   { OnFwd(OUT_BC, -80);
   Wait(1000);}
    if(red > 10)
   { OnFwd(OUT_BC, 80);
   Wait(1000);}

if(UP > -2)
   {
     OnFwd(OUT_B, 30);
     OnFwd(OUT_C, -30);

      }

   if(UP < -7)
   {
     OnFwd(OUT_B, -30);
     OnFwd(OUT_C, 30);
       }

    ReadSensorHTIRSeeker2AC(IRSEEKER, dir, s1, s2, s3, s4, s5);
    heading1 = SensorHTCompass(IN_4); // get current heading
    UP = (heading1 + 540 - azimut) % 360 - 180;
    TextNumOut(0, LCD_LINE3, "Dir:    ",4,dir);
    TextNumOut(6, LCD_LINE4, "S1:     ",3,s1);
    //TextNumOut(6, LCD_LINE6, "zeP:     ",3,zeP);
    //TextNumOut(6, LCD_LINE5, "zeZ:     ",3,zeZ);
   TextNumOut(6, LCD_LINE7, "red:     ",3,red);
    TextNumOut(6, LCD_LINE8, "UP:     ",3,UP);
    TextNumOut(6, LCD_LINE2, "UP:     ",4,UP);


  Wait(1);

   d = s1 + s2 + s3 + s4 + s5;

   //if(d>80){
   if(dir > 6)
   {
  OnFwd(OUT_BC, -100);
     //OnFwd(OUT_B, -90);
      }





   if(dir < 6)
   {
   OnFwd(OUT_BC, 100);
     //OnFwd(OUT_B, 90);



      }
    if(dir == 6)
    {
       OnFwd(OUT_BC, 0);
   }
     //     }
          
          
   // if(d<80){
   // Off(OUT_BC);
   // }
          
          
          
          
  }
 }
     OnFwd(OUT_B, 35);
     OnFwd(OUT_C, -35);

      }

   if(UP < -3)
   {
     OnFwd(OUT_B, -35);
     OnFwd(OUT_C, 35);
       }

    ReadSensorHTIRSeeker2AC(IRSEEKER, dir, s1, s2, s3, s4, s5);
    heading1 = SensorHTCompass(IN_4); // get current heading
    UP = (heading1 + 540 - azimut) % 360 - 180;
    TextNumOut(0, LCD_LINE3, "Dir:    ",4,dir);
    TextNumOut(6, LCD_LINE4, "S1:     ",3,s1);
    TextNumOut(6, LCD_LINE5, "S2:     ",3,s2);
    TextNumOut(6, LCD_LINE6, "S3:     ",3,s3);
    TextNumOut(6, LCD_LINE7, "red:     ",3,red);
    TextNumOut(6, LCD_LINE8, "Us:     ",3,Us);
    TextNumOut(6, LCD_LINE2, "UP:     ",4,UP);


  Wait(1);

  // d = s1 + s2 + s3 + s4 + s5;


   if(dir > 6)
   {
  OnFwd(OUT_BC, -90);

      }





   if(dir < 6)
   {
   if(S3 > 20) {
    OnFwd(OUT_C, 50);
    Off(OUT_B);
   }

   if(S3 < 8) {
    OnFwd(OUT_B, 50);
    Off(OUT_C);
   }

      }
    if(dir == 6)
    {
       OnFwd(OUT_BC, 0);
   }

  }
 }
//brake the loop, if button PP





