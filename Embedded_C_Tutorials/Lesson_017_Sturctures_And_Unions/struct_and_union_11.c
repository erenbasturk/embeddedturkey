#include <stdio.h>

union abc {
	char c;
	int a;
	double d;
}

main()
{
	union abc obj = {65.9};
	printf("\n  %c \n",obj.c);
}
