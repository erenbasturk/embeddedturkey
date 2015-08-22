#include <stdio.h>

int main()
{
	int a=10,b=20,c;
	c = add(a);
	printf("\n %d \n",c);	
}

int add(int x,int y)
{
	int result = x+y;
	return result;
}
