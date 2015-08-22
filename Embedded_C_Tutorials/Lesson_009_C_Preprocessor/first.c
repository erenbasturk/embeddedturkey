/*
 This program explains that how to define object like macro using #define directive.

 Usage	: #define MACRO_NAME macro_expansion

*/

#include <stdio.h>

#define MAX 100		//object like macro
#define PI  3.14

int main()
{
	int a = MAX;
	printf("\nSize of array : %d",sizeof(a));
	printf("\nPI value is   : %f",PI);
}

