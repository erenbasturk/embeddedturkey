#include <stdio.h>

int main()
{
        const int a = 10;
        int const *p = &a;
        *p = 100;
        p++;
}
