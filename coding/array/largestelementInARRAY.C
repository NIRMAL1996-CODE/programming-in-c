//write a c program to find the largest element in an array//
#include<stdio.h>
int main()
{
    int arr[20], size,  i;
    printf("ENTER SIZE = ");
    scanf("%d",&size);
    printf("ENTER %d ELEMENTS= ",size);
     for( i=0; i<size;i++)
     {
        scanf("%d",&arr[i]);
     }
     int max=arr[0];
    for( int j=1 ; j<size; j++)
    {
        if(arr[j]>max);
        {
        max= arr[j];
        }
    }
        printf("largest element =%d",max);
    
     return 0;
     
}