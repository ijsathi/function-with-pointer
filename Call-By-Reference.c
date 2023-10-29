#include <stdio.h>
void fun(int *p)
{
    *p = 999;
}
int main()
{
    int x = 100;
    fun(&x);
    printf("%d\n", x);
    return 0;
}