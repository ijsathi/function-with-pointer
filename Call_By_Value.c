#include <stdio.h>
void fun(int x)
{
    x=99;
    printf("fun er x= %d\n", x);
}
int main()
{
    int x=100;
    printf("main er x= %d\n", x);
    fun(x);
    return 0;
}