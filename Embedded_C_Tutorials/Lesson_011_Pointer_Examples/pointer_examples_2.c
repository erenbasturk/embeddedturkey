#include <stdio.h>

int main()
{
        int a = 10;
        int *p = &a;
        int **q = &p;

        printf("%p \n",q);
        printf("%p \n",*q);
        printf("%p \n",**q);
}
