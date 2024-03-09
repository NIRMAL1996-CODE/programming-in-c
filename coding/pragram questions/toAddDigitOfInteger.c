// write a c program to add digits of a positive integers using do while loop
#include<stdio.h>
int main()
{
    int a, digit=0, sum=0;
    printf(" integer = ");  //1234 = 1+2+3+4= 10 
    scanf("%d",&a);
    do
    {
        digit= a%10;
        sum = sum + digit;
        a=a/10;
    
    }
    while(a!=0);

      printf("sum = %d",sum);
    return 0;
   
}