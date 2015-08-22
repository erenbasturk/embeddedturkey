/*

The example explains that conditional operator also called as "ternary operator"
	
Usage	: exp1 ? exp2 : exp3
	
 	  Arguments
	  exp1
		Any expression
	  exp2 
		Any expression
	  exp3 
		Any expression
*/

#include <stdio.h>

int main()
{
	int a,b,c=10;
	c%2==0?(a=10):(b=20);
	printf("\n a = %d \t b = %d \n",a,b);
}
