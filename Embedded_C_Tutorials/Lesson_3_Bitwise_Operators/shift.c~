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
	int num = 10,x,y;

	printf("value before shifting:%d\n",num);
	printBits(num);
	printf("\n");

	num = num >> 2;
	printf("Result of right shift by 2 bits :%d\n",num);
	printBits(num);
	printf("\n");
	
	num = num << 2;
	printf("Result of left shift by 2 bits :%d\n",num);
	printBits(num);
	printf("\n");
	
	return 0;
}	

