#include <stdio.h>


int add(int,int);		/* Function prototype or Function signature */

int main()
{
	register int a=10,b=20,c;
	c = add(a,b);	/* Function Call */
	printf("\n %d\n",&c);
}

int add(int x,int y)		/* Function Definition */
{
	int result = x + y;
	return result;
}
