//write a c program to calculate the sum of all even numbers between a  given integers
#include<stdio.h>
int main()
{
    int num1, sum =0, digit;
    
    printf("enter  number : ");
    scanf("%d",&num1);
    
   do
    {
        digit= num1%10;
      {      
         if(digit%2==0)    
        {  
           sum=sum + digit; 
        }
      }
    }
    while(num1=num1/10);
    
      printf("%d\n",sum);
        
    
    return 0;
}