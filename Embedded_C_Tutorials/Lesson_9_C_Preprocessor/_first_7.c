#include <stdio.h>
#include "_second.c"
 
int main()
{
	int result;
	printf("\n Including files \n");
	result = add(200,200);
	printf("\n %d \n",result);
}
