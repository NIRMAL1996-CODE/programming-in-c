//write a program to find whether given number is odd or even.//
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int num;
    printf("ENTER A NUMBER ");
    scanf("%d",&num);
     bool result= false;
     if(num%2==0)
     {
         result= true;
     }
     else
     {
         result=false;
     }
    // if(result==true)
      if(result)
     {
         printf("%d is even number",num);
     }
    else
    {
         printf("%d is odd number",num);
    }
    return 0;
}