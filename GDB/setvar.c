#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    a = 5;
    b = 8;

    printf("max(%d,%d) = %d\n", a, b, (a >= b) ? a : b);
    printf("max(%d,%d) = %d\n", a, b, (a >= b) ? a : b);
    
    exit(0);
}