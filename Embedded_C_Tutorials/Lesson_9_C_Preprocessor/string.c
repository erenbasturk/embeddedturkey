/*

This program explains that how to converts macro arguments into string constant

Usage :	#define MACRO_NAME MACRO_BODY

*/

#include <stdio.h>

#define STR(s) #s 	//Converting Macro argument into string constant

int main()
{

	printf("\n Name of organizations is %s \n",STR(EMBEDDED);

}
