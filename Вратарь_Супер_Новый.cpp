 #define IRSEEKER IN_1

// Convenience macro that combines TextOut and NumOut
#define TextNumOut(xPos,yPos,str,col,num)  TextOut(xPos,yPos,str); \
                                           NumOut(xPos+6*col,yPos,num)
task main()
{
//int d;

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


  while(1)
{

if(UP > 1)
   {
     OnFwd(OUT_B, 50);
     OnFwd(OUT_C, -50);

      }

   if(UP< -1)
   {
     OnFwd(OUT_B, -50);
     OnFwd(OUT_C, 50);
       }

    ReadSensorHTIRSeeker2AC(IRSEEKER, dir, s1, s2, s3, s4, s5);
    heading1 = SensorHTCompass(IN_4); // get current heading
    UP = (heading1 + 540 - azimut) % 360 - 180;
    TextNumOut(0, LCD_LINE3, "Dir:    ",4,dir);
    TextNumOut(6, LCD_LINE4, "S1:     ",3,s1);
    TextNumOut(6, LCD_LINE5, "S2:     ",3,s2);
    TextNumOut(6, LCD_LINE6, "S3:     ",3,s3);
    TextNumOut(6, LCD_LINE7, "S4:     ",3,s4);
    TextNumOut(6, LCD_LINE8, "S5:     ",3,s5);
    TextNumOut(6, LCD_LINE2, "UP:     ",4,UP);


  Wait(1);
  //Us=S2;
//  red=S3;
  //  d = s1 + s2 + s3 + s4 + s5;


   if(dir > 6)
   {
  OnFwd(OUT_BC, -90);

      }





   if(dir < 6)
   {
   OnFwd(OUT_BC, 90);




      }
    if(dir == 6)
    {
       OnFwd(OUT_BC, 0);
   }
  }
 }
