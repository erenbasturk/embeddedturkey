#include <stdio.h>

int result;

int add(int x,int y)
{
	return x+y;
}

static void static_func(void)
{
	printf("\n Function private to add.c \n");
}
