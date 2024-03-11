//write a program in c to store elements in an array and print them
#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter elements of array = \n");
    scanf("%d",&arr[0]);
    scanf("%d",&arr[1]);
    scanf("%d",&arr[2]);
    scanf("%d",&arr[3]);
    scanf("%d",&arr[4]);
    
    printf("elements in array are =\n%d\n%d\n%d\n%d\n%d",arr[0], arr[1],arr[2],arr[3],arr[4]);
    
    return 0;
    
}