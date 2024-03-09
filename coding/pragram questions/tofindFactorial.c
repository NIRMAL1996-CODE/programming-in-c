// write a program to find factorial of a number

#include<stdio.h>
int main()
{
    int n , fact=1;
    printf("Enter a Number : \n");
    scanf("%d",&n);
   
    while(n>0)
    {
        fact=fact *n;
        n--;
    }
    printf("Fcatorial = %d",fact);
    
    
    return 0;
}