/*
	
This program exaplaint that all relationss operators,
	Relational operators evaluate either 1(true) or 0(false).

Usage	: exp1 <relational operator> exp2 eg: exp1 > exp2
	  exp1 & exp2 can be an expression
*/

#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	
	printf("\n a = %d, b = %d",a,b);
	printf("\n a > b  : %d",a > b);
	printf("\n a < b  : %d",a < b);
	printf("\n a >= b : %d",a >= b);
	printf("\n a <= b : %d",a <= b);
	printf("\n a != b : %d",a!=b);
	printf("\n a == b : %d",a==b);
}
