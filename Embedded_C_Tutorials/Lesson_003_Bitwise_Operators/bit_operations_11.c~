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
	int a=-10,b=10;
	printBits(a);
	printf("\n");
	//b = 10;
	//b =~b;
	//b +=1;
	printBits(b);
	printf("\n");
}

