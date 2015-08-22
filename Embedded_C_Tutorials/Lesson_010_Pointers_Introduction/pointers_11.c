#include <stdio.h>

int main()
{
	int i = 10;
	float f = 20.5;
	double d = 100.5;
	char c = 'A';

	int *p = &i;
	float *q =&f;
	double *r = &d;
	char *x = &c;

	printf("size of pointer pointing to integer : %d \n",sizeof(int *));
	printf("size of pointer pointing to float : %d \n",sizeof(float *));
	printf("size of pointer pointing to double : %d \n", sizeof(double *));
	printf("size of pointer pointing to char : %d \n",sizeof(char *));

	printf("address of d : %u \n",r);

        r=r+1;
        printf("address of d : %u \n",r);
}
