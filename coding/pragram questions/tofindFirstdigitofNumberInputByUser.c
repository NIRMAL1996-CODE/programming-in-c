//program to print first digit of a number
//doubt 
#include<stdio.h>
int main()
{
    int number,firstdigit;
    printf("enter a number\n");
    scanf("%d",number);
    while(number>=10)
    {   
        number=number/10;
    }
    firstdigit=number;
     printf(" first digit = %d", firstdigit); //no output
  return 0;
}