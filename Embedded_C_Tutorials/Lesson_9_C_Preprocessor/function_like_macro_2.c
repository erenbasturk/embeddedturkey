/*

This program explains that how to define a function like macro takes arguments

Usage	: #define MACRO_NAME()	MACRO_BODY

*/

#include <stdio.h>

void check(int);
#define EVEN(n)	check(n)	//macro takes an argument

int main()
{
	int a;
	printf("\n Enter any integer : ");
	scanf("%d",&a);
	EVEN(a);
}

void check(int x)
{
	printf("\n %s \n",(x%2==0)? "EVEN NUMBER":"ODD NUMBER");
}

