//write a program to find the sum of elements of array by function using pointers//
#include<stdio.h>
int findsum(int a[],int size, int *p);
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(a)/sizeof(a[0]);
    int*p=&a[size];
    *p = findsum(a,size);
    printf(" sum = %d",*p);
    
    return 0;
}

int findsum(int a[],int size, int *p)
{
    for(int i=0; i<size;i++)
    {
        int sum=a[0];
        sum = sum+a[i];
        *p = &sum;
    }
    return *p;
}