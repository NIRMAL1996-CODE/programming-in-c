//write a program to swap two numbers using pointers//
#include<stdio.h>
void swap(int *, int *);
int main()
{
    int a =6, b=7;
    swap(&a,&b);
    printf(" after swapping a= %d b=%d",a,b);
    return 0;
}

void swap(int *y, int *z)
{
    int t;
    t=*y;
    *y=*z;
    *z=t;
}