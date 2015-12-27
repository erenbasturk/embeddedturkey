#include <stdio.h>
#include <malloc.h>

int main()
{
        int *p,i;
        p = (int *)calloc(10*sizeof(int));
        for(i=0; i<10; i++)
                p[i] = i+1;
        for(i=0; i<10 ; i++)
                printf("\n %d \n",p[i]);
}
