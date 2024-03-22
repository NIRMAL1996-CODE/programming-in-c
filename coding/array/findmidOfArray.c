//write a c program to find the mid of the array//
#include<stdio.h>
int main()
{
    int arr[5];
    int size= sizeof(arr)/sizeof(arr[0]);
    printf("size= %d\n",size);
    printf("ENTER elements= ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int mid=size/2;
    mid=arr[mid];
    printf("middle element of array =%d",mid);
    return 0;
}