//program to find first digit of a given number 

#include<stdio.h>
int main()
{
    int number=1234;
      int firstdigit,seconddigit;
    while(number>=10)
    {   
        number=number/10;
    }
    firstdigit=number;
     printf(" first digit = %d", firstdigit);
  return 0;
}