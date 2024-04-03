//write a program in c that simulates a simple voting system using boolean variables to determine eligibility//
#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool x, y;
   int age;
   printf("enter age= ");
   scanf("%d", &age);

   if(age>=18)
   {
       x= true;
       printf("Eligible to vote");
   }
   else
   {
       y= false;
       printf("Not Eligible to vote");
   }
   return 0;
}