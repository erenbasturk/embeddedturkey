#include <stdio.h>

extern int result;
extern int add(int,int);

int main()
{
	result = add(10,20);
	printf("\n result : %d \n",result);
	result = sub(40,20);
	printf("\n result : %d \n",result);
}
