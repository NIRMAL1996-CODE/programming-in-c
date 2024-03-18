/* write a program that uses nested loops to print s pattern of alphabets
A
BB
CCC
DDDD
EEEEE       */

#include<stdio.h>
int main()
{
    int rows; char alphabet= 'A';
    printf("number of rows= ");
    scanf("%d",&rows);
     for(int i=1; i<=rows; i++)
     {
         for(int j=1; j<=i; j++)
         {
             printf("%c",alphabet);
         }
         
          alphabet++;
         printf("\n");
     }
    return 0;
}
