#include <reg51.h>	   

#include "common.h"

int main()
{ 
	while(1)
	{
		P2  = 0x00; 
		delay(600); 
		P2  = 0xff; 
		delay(600); 
	}
	return 0;
}

