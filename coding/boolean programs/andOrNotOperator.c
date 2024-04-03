//write a c program to perform boolean operations(AND ,OR ,NOT)between two variable in c//
#include<stdio.h>
#include<stdbool.h>
int main()
{
   bool a= true,b= false;
   bool x;
   printf("ENTER two numbers = ");
   scanf("%d\n",&a,&b);
   
   x=a&&b;
     printf("%d\n",x);
   x=a||b;
     printf("%d\n",x);
   x=a!=b;
       printf("%d",x);
   
   
    return 0;
}