#include <stdio.h>
int main()
{
    int x = 100;
    int * ptr = &x;
    x = 500;
    printf("%d - address of x", sizeof(x));
    return 0;
}