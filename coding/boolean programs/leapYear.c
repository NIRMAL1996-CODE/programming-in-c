//write a program to find whether given year is a leap year using boolean logic//
//divisible by 4 or 400 but not by 100 called leap year
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int year;
    printf("enter a year ");
    scanf("%d",&year);
     int check= false;
     if(year%400==0 || year%4==0 && year%100!=0)
     {
         check= true;
     }
     else
     {
         check=false;
     }
    // if(result==true)
      if(check)
     {
         printf("%d is a leap year",year);
     }
    else
    {
         printf("%d is not a leap",year);
    }
    return 0;
}