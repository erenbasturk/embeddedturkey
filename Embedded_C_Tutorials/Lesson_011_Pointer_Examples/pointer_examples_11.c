#include <stdio.h>
 
void add(int p,int q,int *result)
{
        *result = p+q;
}
 
int main()
{
        int a=10,b=20,r;
        add(a,b,&r);
        printf("\n %d \n",r);
}
