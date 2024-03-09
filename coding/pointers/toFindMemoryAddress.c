//write  a program to know the memory address of a variable

#include<stdio.h>
int main()
{
    int a = 4;
    int *ptr= a;
    printf("%d\n",a); // Outputs the value of variable
    printf("%p",&a); // Outputs the memory address of variable 
    return 0;
}