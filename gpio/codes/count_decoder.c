#include <wiringPi.h>
int main (void)
{
  int Z=0,Y=0,X=1,W=1;
  int D,C,B,A;
  wiringPiSetup () ;
  pinMode (0, OUTPUT) ;
  pinMode (1, OUTPUT) ;
  pinMode (2, OUTPUT) ;
  pinMode (3, OUTPUT) ;
  for (;;)
  {
  
  D = (W&&X&&Y&&!Z) || (!W&&!X&&!Y&&Z);
  C = (W&&X&&!Y&&!Z) || (!W&&!X&&Y&&!Z) || (W&&!X&&Y&&!Z) || (!W&&X&&Y&&!Z);
  B = (W&&!X&&!Y&&!Z) || (!W&&X&&!Y&&!Z) || (W&&!X&&Y&&!Z) || (!W&&X&&Y&&!Z);
  A = (!W&&!X&&!Y&&!Z) || (!W&&X&&!Y&&!Z) || (!W&&!X&&Y&&!Z) || (!W&&X&&Y&&!Z) || (!W&&!X&&!Y&&Z);

  
   digitalWrite (0, A);
   digitalWrite (1, B) ;
   digitalWrite (2, C) ;
   digitalWrite (3, D) ;
  }
  return 0 ;
}	
