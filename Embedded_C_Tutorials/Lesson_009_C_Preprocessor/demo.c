#include <stdio.h>

#define FORLOOP_10	for(i=0;i<10;i++)		\
			{				\
				printf(" %d ",i);	\
			}				\
			printf("\n");

int main()
{
	int i;
	FORLOOP_10;
}
