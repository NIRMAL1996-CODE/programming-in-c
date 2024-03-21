//write a cprogram to find the sum of all negative numbers in an array//
#include<stdio.h>
int main()
{
    int arr[10]={1, -2, -3, 5, 6, -7 ,8,-9,4,2};
    int sum =0;
    for(int i=0; i<10; i++)
    {
        if(arr[i]<0)
        {
            sum=sum+arr[i];
        }
    }
    printf("sum of all negative number in an array = %d",sum);
    return 0;
}