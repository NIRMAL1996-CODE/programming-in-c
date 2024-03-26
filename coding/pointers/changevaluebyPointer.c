//write a program to change the value of variable using pointer//
#include<stdio.h>
int main()
{
    int a =9;
    int *p=&a;
    *p=20;
    printf("changed value= %d",*p);
    return 0;
}