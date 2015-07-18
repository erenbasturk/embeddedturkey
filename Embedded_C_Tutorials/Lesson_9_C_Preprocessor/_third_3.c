#include <stdio.h>

extern int add(int, int);
void sum()
{
	int x=10, y=20, result;
	result = add(x);
	printf("\n Sum : %d \n",result);
}
