#include<stdio.h>
int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
     for(int i=1; i<=num; ++i)
     { 
         int sum=0;
        sum+=i  ;
     
        printf("sum = %d",sum);
     }
     return 0;
}