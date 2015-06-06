#include <stdio.h>

static void static_func(void);
int result;

int add(int x,int y)
{
	static_func();
	return x+y;
}

static void static_func(void)
{
	printf("\n Function private to add.c \n");
}
