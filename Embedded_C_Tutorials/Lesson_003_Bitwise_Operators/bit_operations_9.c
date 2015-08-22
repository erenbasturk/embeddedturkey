#include <stdio.h>

/* reg points to a device register which is used to control device & read status of the device */

#define RESET 		1
#define RESET_MODE	505	
#define MODE1		1	/* 00 */
#define MODE2		2	/* 01 */
#define MODE3		3 	/* 10 */
#define MODE4		4	/* 11 */
#define WRITE_ON	8	/* OR */
#define WRITE_OFF	247	/* AND */

/* Define MACROS to handle read bit on/off & error bit on/off */

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
	char reg=0;

	reg |= RESET;
	printBits(reg);
	printf("\n");

	reg |= MODE4;
	printBits(reg);
	printf("\n");

	reg &= RESET_MODE;
	reg |= MODE2;
	printBits(reg);
	printf("\n");

	reg&= RESET_MODE;
	reg|= MODE3;
	printBits(reg);	
	printf("\n");

	reg |= WRITE_ON;
	printBits(reg);
	printf("\n");
	

	if((reg>>3)&1)
		printf("\n Write is possible \n");
	else
		printf("\n Write is not possible \n");

	reg &= WRITE_OFF;
	printBits(reg);
	printf("\n");

	if((reg>>3)&1)
		printf("\n Write is possible \n");
	else	
		printf("\n Write is not possible \n");
}

