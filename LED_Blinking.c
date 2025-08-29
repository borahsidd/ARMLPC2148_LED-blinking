#include <lpc214x.h>

void delay(unsigned int a)
{
  unsigned int j=0,i=0;
  for(j=0;j<a;j++)
  {
    for(i=0;i<1000;i++);
  }
}

/* start the main program */
int main() 
{
    PINSEL2 = 0x00000000;  //Configure the P1 Pins for GPIO;
    IODIR1 =  0xffffffff; //Configure the P1 pins as OUTPUT;

  while(1)
    {
       IOSET1 = 0xffffffff;     // Make all the Port pins as high  
       delay(1000);

       IOCLR1 = 0xffffffff;     // Make all the Port pins as low  
       delay(1000);
    }
}
