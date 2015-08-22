/*
	This program exaplains that increment operator ad in how many ways it can be used.
 
Usage	: lvalue++	Called as "Postfix Form"
	: ++lvalue	Called as "Prefix Form"
	In POSTFIX increments the current value of lvalue after value has been referenced.
	In PREFIX increments the current value of lvalue before lvalue has been referenced.  
*/
 
#include <stdio.h>
 
int main()
{
	int a = 10, b = 10;
	
	printf("\n postfix\ta = %d \n",a++);	// a is referenced first then incremented
 
	printf("\n prefix \tb = %d \n",++b);	// b is incremented first then refered
}

