#include <stdio.h>

struct xyz{
	int x,y;
	char c;
	char str[20];
	int arr[2];
};

int main()
{
	struct xyz obj= {10,20,'Z',"embedded turkey",{100,200}};
	printf("\n %d %d \n",obj.x, obj.y);
}
