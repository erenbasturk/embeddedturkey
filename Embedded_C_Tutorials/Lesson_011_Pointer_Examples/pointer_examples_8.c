#include <stdio.h>

void swap(int *p,int *q)
{
        int temp;
        temp = *p;
        *p = *q;
        *q = temp;
}

int main()
{
        int a = 10,b = 20;
        swap(&a,&b);
        printf("\n %d %d \n",a,b);
}
