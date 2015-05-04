#include <stdio.h>

void printBits(int x)
{
	int i,j;
	for(i=31; i>=0 ;i--)
	{
	 	j = (x>>i) & 0x01;
	 	printf("%d",j);
		if(i && i%8 == 0)
			printf("-");
	}

}

int main()
{
	int a=10;

	printBits(a);
	a=~a;
	printf("\n");
	printBits(a);
	printf("\n");
	
	return 0;
}	

