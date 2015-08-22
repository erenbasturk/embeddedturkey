#include <stdio.h>

int main()
{
        const int a = 10;
        const int *p = &a;
        *p = 100;
}
