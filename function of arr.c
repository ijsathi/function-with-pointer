#include <stdio.h>
void fun(int arr[], int n){
    for(int i = 0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    fun(arr, 6);
    return 0;
}