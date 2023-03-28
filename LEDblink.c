#include <AT89S52.h>	/* include header for AT89S52 */ 

void wait(void);

void main()
{    	
  while(1)  	/* Super loop (Infinite loop) */
  {
   P2_0=1;
   wait();
   P2_0=0;
   wait();
  }
}

void wait(void)
{
 int i;
 for(i=0;i<100;i++)
 {}
 
}
