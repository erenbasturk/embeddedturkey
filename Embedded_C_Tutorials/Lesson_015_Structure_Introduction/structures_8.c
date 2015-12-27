#include <stdio.h>

struct xyz {
	int x;
	char c;
	double d;
};

int main()
{
	struct xyz obj = {10, 'z', 10.6};
	printf("\n %d %c %lf \n", obj.x, obj.c, obj.d);
}
