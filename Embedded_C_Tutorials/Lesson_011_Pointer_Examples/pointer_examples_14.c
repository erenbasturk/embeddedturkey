#include <stdio.h>
 
int main()
{
        int a;
        char c;
        double d;
        void *p = &a;
 
        *(int *)p = 10;
        printf("\n %d \n",a);
 
        p = &c;
        *(char *)p = 'A';
        printf("\n %c \n",c);
 
        p = &d;
        *(double *)p =100.6;
        printf("\n %lf \n",d);
 
        p = (int *)p+1;
}
