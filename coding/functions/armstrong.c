//write a c program to input a number from the user and determine whether it is an armstong number or not//
//wrong code
#include<stdio.h>
int armstrong(int number);
int main()
{
    int num;
    printf(" ENTER A NUMBER= ");
    scanf("%d",&num);
    printf("%d",(armstrong(num)));
   {
    printf("%d is an armstrong number",num);
    }
    else
    {
         printf("%d is not an armstrong number",num);
    }
    return 0;
}

int armstrong(int number)
{   
    int count=0;
  for(int i=1;number>0;i++)
  {
      number=number/10;
      count+=1;
  } 
   int rem,result;
    for(int i=count;count>0;i--)
    {
      rem=number%10;
      result*= rem+result;
    }
     printf("%d",result);
}