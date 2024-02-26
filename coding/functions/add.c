#include<stdio.h>
int add(int a ,int b)
{
    return a+b;
}
int main()
{
    int a=5; int b=6; 
 
     int result= add(a,b);
     printf("result= \n%d",result);
     return 0;
}