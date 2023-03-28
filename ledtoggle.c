#include <AT89S52.h>	/* include header for AT89S52 */ 
#define LED P2_0
#include <led.h>

void wait(char);

void main()
{    	
  while(1)  	/* Super loop (Infinite loop) */
  {
  led_toggle();
  wait(20);
  }
}

void wait(char val)
{
 int i;
 for(i=0;i<val;i++)
 {}
 
}
