#include <stdio.h>

struct xyz{
	int x,y;
	char c;
	char str[20];
	int arr[2];
};

int main()
{
	struct xyz obj= {.x=10, .c='z'};
	printf("\n %d %d \n",obj.x, obj.y);

	printf("\n %c \n", obj.c);
	printf("\n %s \n", obj.str);
	printf("\n %d %d \n", obj.arr[0], obj.arr[1]);
}
