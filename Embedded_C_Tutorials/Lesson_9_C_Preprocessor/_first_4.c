#include <stdio.h>
extern int add(int,int);

int main()
{
	int result;
	printf("\n Including files \n");
	result = add(200,200,300);
	printf("\n %d \n",result);
}
