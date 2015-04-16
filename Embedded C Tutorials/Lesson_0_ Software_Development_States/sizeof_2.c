#include <stdio.h>

main()
{
	int a = 5,b;
	b = sizeof(a++);
	printf("\n %d %d \n",a,b);
}
