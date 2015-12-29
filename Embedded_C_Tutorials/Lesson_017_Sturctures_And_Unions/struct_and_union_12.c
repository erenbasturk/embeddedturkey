#include <stdio.h>

union abc {
	char c;
	int a;
	double d;
}

main()
{
	union abc obj;
	
	obj.d = 20.4;
	printf("\n  %lf \n",obj.d);
}
