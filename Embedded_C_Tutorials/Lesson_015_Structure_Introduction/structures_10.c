#include <stdio.h>

struct xyz {
	int x;
	char c;
	double d;
};

int main()
{
	struct xyz obj = {10, 'z', 10.6};
	struct xyz *ptr = &obj;
	
	printf("\n %d %c %lf \n", obj.x, obj.c, obj.d);

	(*ptr).x = 200;
	(*ptr).d = 200.9;
	printf("\n %d %c %lf \n", obj.x, obj.c, obj.d);

	ptr->x = 400;
	ptr->d = 400.6;
	printf("\n %d %c %lf \n", obj.x, obj.c, obj.d);
}
