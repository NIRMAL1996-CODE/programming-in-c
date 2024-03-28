//write a c program to find the sum of elements of array//
#include<stdio.h>
void sum(int *p, int a[],int size);
int main()
{
    int a[5]={1,2,3,4,5};
    int n =sizeof(a)/sizeof(a[0]);
    int *p;
    p=&a[n];
    sum(p,a,n);
    printf("sum of elements = %d",*p);
    return 0;
}

void sum(int *p, int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
       sum+=a[i];
       *p=sum;
    }
}
