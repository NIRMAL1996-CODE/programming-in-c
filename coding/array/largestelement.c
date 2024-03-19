//write a program to find  the largest element in a array.//
#include<stdio.h>
int main()
{
    int arr[20], size, max=arr[0], i;
    printf("ENTER SIZE = ");
    scanf("%d",&size);
    printf("ENTER %d ELEMENTS= ",size);
     for( i=0; i<size;i++)
     {
        scanf("%d",&arr[i]);
     }
     
    for( i=1 ; i<size; i++)
    {
        if(arr[i]>arr[size]);
         max= arr[i];
        printf("%d",max);
    }
     return 0;
     
}