//write a program to calculate the product of elements of array//
#include<stdio.h>
int product(int arr[],int size);
int main()
{
    int arr[5];
    int size= sizeof(arr)/sizeof(arr[0]);
    printf("ENTER ELEMENTS\n");
    for(int i= 0; i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("product of elements = %d",product(arr,size));
     return 0;

}

int product(int arr[],int size)
{   
    int product= arr[0];
    for(int i=1;i<size;i++)
       {
         product*=arr[i];
        }
    
    return product;
}