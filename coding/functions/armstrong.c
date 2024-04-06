//write a c program to input a number from the user and determine whether it is an armstong number or not//
#include<stdio.h>
int armstrong(int number);
int main()
{
    int num, result;
    printf(" ENTER A NUMBER= ");
    scanf("%d",&num);
    result= armstrong(num);
    return 0;
}

int armstrong(int number)
{   
    int n=number;
  int rem,arm=0;
    for(int j=1;number>0;j++)
    {
      rem=number%10;
          arm=(rem*rem*rem)+arm;
      number=number/10;
    }
  if(arm==n)
   {
    printf("%d is an armstrong number",arm);
    }
    else
    {
     printf("%d is not an armstrong number",arm);
    }
    return arm;
}