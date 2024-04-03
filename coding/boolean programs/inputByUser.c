//how would you prompt the user to input a boolean value in c//
#include<stdio.h>
#include<stdbool.h>
int main()
{
   bool a;
   int x;
   printf("ENTER 1 FOR TRUE AND ENTER 0 FOR FALSE = ");
   scanf("%d",&x);
   if(x==1)
   {   
       a= true;
       printf("%d means you enter true \n",a);
   }
   else if(x==0)
   {   
       a=false;
       printf("%d means you enter false",a);
   }
   else
   {
       printf("invalid input");
   }
   
    return 0;
}