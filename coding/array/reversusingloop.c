//write a c program to print the elements of array in reverse form//
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
     size-=1;
    for(int i = size; i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}