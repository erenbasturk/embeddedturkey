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
	int a,b;
	a=30,b=20;
	printf("\n %s \n",(a>b) ? "a is Big" : "b is Big");
}
