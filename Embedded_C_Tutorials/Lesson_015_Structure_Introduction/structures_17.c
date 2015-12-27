#include <stdio.h>

int main()
{
	int a;
	double d;
	char c;	

	printf("%d \n", (unsigned int)&a % sizeof(a));
	printf("%d \n", (unsigned int)&d % sizeof(d));
	printf("%d \n", (unsigned int)&c % sizeof(c));
}
