/*

This program explains that how to define object like macro using #define directive
This program shows that how to continue the definition onto multiple lines

Usage	: #define MACRO_NAME macro_expansion

*/

#include <stdio.h>

#define EVENS 2,\
	      4,\
              6,\
              8		// '\' is used tı continue the definition of a macro onto multiple lines

#define NEWLINE printf("\n");

int main()
{
	int even_array[]={EVENS},i;
	for(i=0;i<4;i++)
		printf(" %d ",even_array[i]);
	NEWLINE

}
