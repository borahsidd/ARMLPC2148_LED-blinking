#include <lpc214x.h>

void delay(unsigned int a)
{
  unsigned int j=0,i=0;
  for(j=0;j<a;j++)
  {
    for(i=0;i<1000;i++);
  }
}

////////////////////* start the main program *///////////////////////
int main() 
{
		PINSEL1 =0x00000000;
    IODIR0 |=0x00000400; //Configure the P0.17 pins as OUTPUT; // 0000 0000 0000 0000 0000 0100 0000 0000// you can also write as (1<<10)

  while(1)
    {
      IOSET0 |=0x00000400;  // Writing 1 to P0.10 using IO0PIN  
      delay(2000);

			IOCLR0 |=0x00000400;    // Writing 0 to P0.10 using IO0PIN  
      delay(2000);
    }
}
