#include <stdio.h>

int main()
{
	int si = - 5; /* some signed int value */
	unsigned ui = 65530; /* some unsigned value */
	printf("%d \n",(si < 0 || (unsigned)si < ui));
	printf("%d \n",(unsigned)si < ui);
}
