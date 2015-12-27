#include <stdio.h>

struct xyz{
	int x,y;
};

int main()
{
	struct xyz obj= {10,20};
	printf("\n %d %d \n",obj.x, obj.y);
}
