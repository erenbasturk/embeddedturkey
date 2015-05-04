#include <stdio.h>

#define FIRST_MASK 	1048575 //0xFFFFFF
#define SECOND_MASK	4095	//0xFFFF

int main()
{
	unsigned int a=0,b,c=0xff;
	b=10000;
	a = a|(b<<12);
	b = 20;
	a = a|b;
	
	b = 0;
	b = a&SECOND_MASK;
	printf("\n %d \n",b);
	b = (a>>12)&FIRST_MASK;
	printf("\n %d \n",b);
}
