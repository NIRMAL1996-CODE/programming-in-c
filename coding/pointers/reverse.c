//implement the function in c to reverse the order of elements of array using pointers.//
#include<stdio.h>
void reverse( int *p , int a[],int n);
int main()
{
    int a[]= {1,2,3,4,5};
    int n= sizeof(a)/sizeof(a[0]);
    int *p;
    p=&a[n];
    reverse(p,a,n);
    //printf("reverse elements = %d",*p);
    return 0;
}

void reverse( int *p , int a[],int n)
{
    n=n-1;
    for(int i=n; i>=0;i--)
    {
        *p=a[i];
        printf("%d\n",*p);
    }
   
}