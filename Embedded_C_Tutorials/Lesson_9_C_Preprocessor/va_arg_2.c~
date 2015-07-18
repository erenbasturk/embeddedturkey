/*

This program expalain that how to define & use Variadic Macros

Usage : #define macro(...) Macro_body(arguments list)

*/

#include <stdio.h>
#define SUM_PRINT(...) printf(__VA_ARGS__)
#define ERROR(...) fprintf(stderr,__VA_ARGS__)

int main()
{
	int a=10,b=20;
	float c=10.2,d=12.5;

	if(a<0 || b<0)
		ERROR("ERROR : %d, %d\n",a,b);
	else
		SUM_PRINT("%d + %d = %d\n",a,b,a+b);
}
