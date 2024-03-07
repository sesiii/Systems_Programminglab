#include <stdio.h>
#include <stdlib.h>
void h(int n)
{
    printf("+++ Called h(%d)\n", n);
}
void g(int n)
{
    if (n >= 3)
        h(n - 3);
}
void f(int n)
{
    while (n >= 0)
    {
        g(n);
        n -= 2;
    }
}
int main()
{
    int i;
    for (i = 0; i < 5; ++i)
        f(i);
    exit(0);
}