#include <stdio.h>

int main()
{
        double a = 10.1;
        double *p = &a;
        double **q = &p;
        
        printf("%u  \n",q);
        printf("%p  \n",*q);
        printf("%lf \n",**q);
        
        ++q;
        printf("%u \n",q);
}
