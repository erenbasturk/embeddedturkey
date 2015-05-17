/*

This program implements goto & label statements in c

Usage : goto label:

*/


#include <stdio.h>

int main()
{
	int a=5;
	if(a>1)
	{
	  if(a>2)
	      if(a>3)
		 if(a>4)
		    if(a==10)
		    {
		    printf("\n control is being jumped to specified label \n");		     
		    goto flag;
		    }
	printf("\n Exiting normally from if & also executes statements in label \n");
	}
	flag:
		printf("\n executing from label \n");
}
