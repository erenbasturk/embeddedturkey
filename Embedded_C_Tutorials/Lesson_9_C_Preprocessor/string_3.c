/*

This program explains that how to converts macro arguments into string constant

Usage :	#define MACRO_NAME MACRO_BODY

*/

#include <stdio.h>

#define STR(s) #s 	//Converting Macro argument into string constant
#define String_Concat(s1,s2)	STR(s1 ## s2)

int main()
{
	printf("\n %s \n",String_Concat(Embedded, Turkeys);
}
