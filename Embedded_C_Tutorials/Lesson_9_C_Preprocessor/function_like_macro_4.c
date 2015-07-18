/*

This program explains that how to define a function like macro takes arguments & how to invoke them

Usage 	: #define MACRO_NAME()	MACRO_BODY

*/

#include <stdio.h>

#define BIG(x,y)	(x>y) ? x : y

int main()
{
	int a,b,c;
	printf("\n Enter any three integer :");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n Biggest of three numbers : %d\n",BIG(BIG(a,b),c));
}
