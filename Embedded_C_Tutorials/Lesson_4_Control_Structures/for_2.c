/*

This program explains that for looping constructor.
This example will tables up to 10 of given number.

Usage: for([expresion1](opt); [expression2](opt); [expression3](opt))
       {
	   statement;
	   .........;
	   .........;
	   .........;
	   .........;	
       }

	Arguments
		expression1 
			Expression1 is the initisialition expression that typically specifies the inital values of variables. It is evaluated only once before the first iteration of the loop.
		expression2
			Expression2 is the controlling expression that determines whether or not to terminate the loop. It is evaluated before each iteration of the loop. If expression2 evaluates to a nonzero value, the loop body is executed. If it eveluates to 0, execution of the loop body is terminated and control passes to the first statement after loop body. This means that if the initial value of expression2 eveluates to zero, the loop body is never executed.
		expression3
			Expression3 is the increment expression that typically increments the variable initialized in expression1. It is eveluated after each iteration of the loop body and before the next evaluation of the controlling expression.

*/

#include <stdio.h>

int main()
{
	int i=1,num;
	
	printf("\n Enter any number for which you want tables \n");
	scanf("%d",&num);
	for(;i<=10;)
	{
		printf("\n %3d * %2d = %3d \n",num,i,num*i);
		i++;
	}	

	printf("\n");

}
