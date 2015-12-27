#include <stdio.h>
#include <malloc.h>

int main()
{
	int *p, i;
	p = (int *)calloc(10,sizeof(int));
	for(i=0; i<12; i++)
		p[i] = i+1;

	free(p);
	p = NULL;

	for(i=0; i<10; i++)
		printf("\n %d \n",p[i]);
}
