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

char offbit(char val,int pos)
{
	char x = 1;
	x = x<<pos-1;
	x =~x;
	val &=x;
	
	return val;
}

int main()
{
	char a=10;
	printBits(a);
	printf("\n");
	a = offbit(a,2);
	printBits(a);
	printf("\n");
	
	return 0;
}	

