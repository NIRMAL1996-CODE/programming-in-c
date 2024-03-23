//write a program to find the average of the elements of array//
#include<stdio.h>
int average(int arr[], int size);
int main()
{
    int arr[5];
    int size =sizeof(arr)/sizeof(arr[0]);
    printf("enter elements= ");
    for(int i=0; i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
       int a= average(arr,size);
       printf("AVERAGE=%d",a);
       return 0;
}

int average(int arr[], int size)
{  
    int sum=0;
    for(int i=0; i<size; i++)
    {   
        sum= sum+arr[i];
      
    }
    return  (int)sum/size;
}