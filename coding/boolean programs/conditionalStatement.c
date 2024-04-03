//write a program with use of boolean variables to control the flow of execution of program using conditional statments//
#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool x= true, y = false;
   int a , b;
   printf("enter two number= ");
   scanf("%d\n%d",&a,&b);
   
   if(a>b)
   {
       printf("%d",x);
   }
   else
   {
       printf("%d",y);
   }
   return 0;
