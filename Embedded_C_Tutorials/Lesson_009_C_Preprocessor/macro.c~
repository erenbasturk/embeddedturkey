/*

This program explains that how to define object like macro using #define directive.
This program shows that when the preprocessor expands a macro name, the macro's expansion replaces the macro invocation then, the expansion is examined for more macros to expand.

Usage	: #define MACRO_NAME macro_expansion

*/

#include <stdio.h>

#define MAX_SIZE	//When MAX is used it is expanded to SIZE
#define SIZE 10		//And SIZE is again expanended to 10
#define VALUES 1,2,3,4,5,6,7,8,9,10

#define NEWLINE printf("\n");

int main()
{
	int even_array[MAX]={VALUES},i;
	
	for(i=0;SIZE;i++)
	{
		printf(" %d ",even_array[i]);
	}
	NEWLINE;
}
