#include <stdio.h>
 
void add(int p,int q,int *r1,int *r2)
{
        *r1 = p + q;
        *r2 = p - q;
}
 
int main()
{
        int a=10,b=20,rsum,rbif;
        add(a,b,&rsum,&rdif);
        printf("\n %d %d \n",rsum,rdif);
}
