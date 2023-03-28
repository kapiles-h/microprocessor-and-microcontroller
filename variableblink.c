#include <AT89S52.h>	/* include header for AT89S52 */ 

void wait(char);

void main()
{    	
  while(1)  	/* Super loop (Infinite loop) */
  {
   P2_0=P2_1;
   wait(20);
   P2_1=!P2_0;
   wait(30);
    }
}

void wait(char val)
{
 int i;
 for(i=0;i<val;i++)
 {}
 
}
