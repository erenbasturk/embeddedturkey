#include <stdio.h>

int main()
{
	float a=10.5,b=20.1,c;
	c = add(a,b);		/* Function call */
	printf("\n %f \n",c);
}

float add(float x, float y)
{
	float result = x+y;
	return result;		
}
