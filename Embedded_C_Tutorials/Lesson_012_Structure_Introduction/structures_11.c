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
	struct xyz obj_arr[2] = {{10,'z',10.6},{20,'M',20.9}};
	
	printf("\n %d %c %lf \n", obj.x, obj.c, obj.d);

	(*ptr).x = 200;
	(*ptr).d = 200.9;
	printf("\n %d %c %lf \n", obj.x, obj.c, obj.d);

	ptr->x = 400;
	ptr->d = 400.6;
	printf("\n %d %c %lf \n", obj.x, obj.c, obj.d);

	printf("\n %d %c %lf \n", obj_arr[0].x, obj_arr[0].c, obj_arr[0].d);
	printf("\n %d %c %lf \n", obj_arr[1].x, obj_arr[1].c, obj_arr[1].d);
}
