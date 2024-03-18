/*write a program that uses nested loops to print s pattern of numbers in the following shape       
                   1
                   22
                   333
                   4444
                   55555  */
#include<stdio.h>
int main()
{
    int rows;
    printf("enter number of rows= ");
    scanf("%d",&rows);
     for(int i=1; i<=rows;i++)
     {
         for(int j=1; j<=i; j++)
         {
             printf("%d",i);
         }
         printf("\n");
     }
     return 0;
}