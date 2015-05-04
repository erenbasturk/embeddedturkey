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
	int a=25,b=5,c;
	
	printBits(a);
	printf("\n");

	printBits(b);
	printf("\n");
	printf("\n");

	c = a|b;
	printBits(c);
	printf("\n");
	
	return 0;
}	

