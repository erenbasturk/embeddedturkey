#include <stdio.h>

int *test(void)
{
        int a = 10;
        return &a;
}

int main()
{
        int *p;
        p = test();
}
