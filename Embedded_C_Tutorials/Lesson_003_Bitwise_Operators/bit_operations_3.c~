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
	int k;
	char a=10,b=6;
	
	printBits(a);
	printf("\n");

	printBits(b);
	printf("\n");

	k = a^b;
	printBits(k);
	printf("\n");
	
	return 0;
}	

