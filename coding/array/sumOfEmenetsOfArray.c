//write a cprogram to find the sum of elements of array//
#include<stdio.h>
int main()
{
    int arr[5],sum =0;
    int size =sizeof(arr)/sizeof(arr[0]);
    printf("enter %d elements\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
     for(int i=0;i<size;i++)
     {
         sum+=arr[i];
     }
     printf("sum = %d",sum);
    return 0;
}