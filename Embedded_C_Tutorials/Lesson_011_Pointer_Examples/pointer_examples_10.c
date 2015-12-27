#include <stdio.h>

void swap(int *p,int *q)
{
        static int x=100;
        int temp;
        temp = *p;
        *p = *q;
        *q = temp;
        p = &x;
}

int main()
{
        int a = 10,b = 20;
        int *p=&a;
        int *q=&b;
        swap(p,q);
        printf("\n %d %d \n",a,b);
}
