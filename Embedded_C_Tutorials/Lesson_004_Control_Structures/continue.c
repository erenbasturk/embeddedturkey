/*

This example explains that how to use continue statement
This example asks the user to enter any 10 integers & find sum of all elements, if any -ve value is the continue statement bypasses the arithmetic expression

Usage: continue;

*/

#include <stdio.h>

int main()
{
	int i,sum=0,num;
	printf(" Enter any 10 +ve integers \n");
	for(i=0;i<=10;i++)
	{
	   scanf("%d",&num);
	   if(num<0)
		continue;
	   sum+=num;
	}
	printf("\n Sum of all +ve values entered :%d\n",sum);
}
