//how would you initialise boolean variable in c//
#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool y;
   int b=20;
   int c= 90;
   y=b<c;
   
   int  a= b>c;
   bool z= 1.1;
    printf("%d\n%d\n%d",y, a, z);
    return 0;
}