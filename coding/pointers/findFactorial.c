//write a program to find factorial of number using pointers//
#include<stdio.h>
int factorial(int *);
int main()
{
    int a=5;
    int fact =1;
     int *p;
     p=&fact;
    factorial(&fact);
    printf("factorial of %d is %d",a,*p);
    return 0;
}
int factorial(int *f)
{
    for(int i=1;i<=5;i++)
    {
        *f=*f*i;
    }
    return *f;
}