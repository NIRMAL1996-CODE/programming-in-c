//write a program to find the given number is palinfrome or not.(e.g.121)//
#include<stdio.h>
int palindrome(int n);
int main()
{
    int num;
    printf("ENTER A NUMBER= ");
    scanf("%d",&num);
    if(palindrome(num)==num)
    {
    printf(" %d is palindrome number\n",num );
    }
    else
    {
     printf("%d is not a palindrome number\n",num);
    }
    return 0;
}
int palindrome(int n)
{
    int rem, result=0;
    for(int i=1;n>0;i++)
    {
        rem= n%10;
        result=result*10+rem;
          n=n/10;
    }
     return result;
}