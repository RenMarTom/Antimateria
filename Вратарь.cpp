 #define IRSEEKER IN_1

// Convenience macro that combines TextOut and NumOut
#define TextNumOut(xPos,yPos,str,col,num)  TextOut(xPos,yPos,str); \
                                           NumOut(xPos+6*col,yPos,num)
task main()
{

//long t0, time;
int heading1, azimut;
SetSensorLowspeed(IN_4);
SetSensorColorRed(S3);
SetSensorColorRed(S2);
SetSensorLowspeed(S1);

SetSensorLowspeed(IN_1);
  int dir, s1, s2, s3, s4, s5, result;
    heading1 = SensorHTCompass(IN_4);
    azimut = heading1;
  SetSensorLowspeed(IRSEEKER);
    int d;
    int UP;

  int red;
  int Us;

  //OnFwd(OUT_B, 50);
    // OnFwd(OUT_C, -50);
//Wait(530);




  while(1)
  {
  Us=S3;
   red=S2;
   d = s1 + s2 + s3 + s4 + s5;
 //  if (d < 50){
//{
/*   if(UP>-63)
   {
     OnFwd(OUT_B, 30);
     OnFwd(OUT_C, -30);
      }

   if(UP<-68)
   {
     OnFwd(OUT_B, -30);
     OnFwd(OUT_C, 30);
          }




  if(red > 14)
   {


     OnFwd(OUT_BC, 90);


    Wait(1000);

}


   if(Us>20)
    {


   OnFwd(OUT_BC, -90);


    Wait(1000);
    }*/
   if (dir <6)
   {


 OnFwd(OUT_BC, 90);


   }
    if (dir >6)
   {



     OnFwd(OUT_BC, -90);

   }


   if (dir == 6)
   {
   OnFwd(OUT_BC,0);
               }
          }
