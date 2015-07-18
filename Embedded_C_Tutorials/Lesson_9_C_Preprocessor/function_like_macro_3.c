/* 

This program explains that how to define a function like macro takes arguments & how to invoke them

Usage	: #define MACRO_NAME() MACRO_BODY

*/
#include <stdio.h>

#define BIG(x,y) (x>y) ? x : y

int main()
{
	int a,b,result,*p;
	char y = 'F', z = '5';
	printf("\n Enter any two integer : \n");
	scanf("%d %d",&a,&b);
	printf("\n Biggest of two numbers : %d\n",BIG(a,b));
	printf("\n Biggest of two char : %c",BIG(y,z));
	printf("\n Biggest of two float : %f \n",BIG(10.23,23.45));
}
