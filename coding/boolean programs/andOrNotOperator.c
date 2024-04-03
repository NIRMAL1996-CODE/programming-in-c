//write a c program to perform boolean operations(AND ,OR ,NOT)between two variable in c//
#include<stdio.h>
#include<stdbool.h>
int main()
{
   bool a= true,b= false;
   bool result;
  
   result=a&&b;
     printf("%d\n",result);

   result=a||b;
     printf("%d\n",result);

   result=a!=b;
       printf("%d",result);
    return 0;
}