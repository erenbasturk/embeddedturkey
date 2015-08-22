/*

This program explains that how to use conditional

Usage :	#ifdef MACRO
		........
	#endif
*/

#define NEGATIVE
#include <stdio.h>

int main()
{
	#ifdef POSITIVE
	int a = 10, b = 20;
	#endif

	#ifdef NEGATIVE
	int a = -10, b = -20;
	#endif
	
	printf("\n %d +d %d = %d\n,a,b,a+b");
}
