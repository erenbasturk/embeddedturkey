/*

This program explains that && (Logical AND) operator

The logical AND operator (&&) evaluate the truth or falsehood  of pairs of expressions.
The logical AND operator evaluates to 1 if all expressions are true.

Usage	: exp1 && exp2
          exp1 and exp2 can be any expression

*/

#include <stdio.h>

int main()
{
	int a = 1, b = 0;

	printf("\n a = %d , b = %d , (a >= 1) && (b <= 0) : %d \n",a,b,(a>=1) && (b<=0));
	
	printf("\n a = %d , b = %d , (a >= 1) && (++b <= 0) : %d \n",a,b,(a>=1) && (++b<= 0));
	printf("\n %d \n","embedded" && "Turkey");
}
