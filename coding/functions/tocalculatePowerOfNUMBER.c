//function returning values : create a c program with a function called power that takes two integer parameters and return the result.
// call from main and print the result. 
#include<stdio.h>
//#include<math.h>
int power(int base , int expo);
int main()
{
    int base =2, expo= 3;
    int result = power(base , expo);
    printf("RESULT = %d", result);
    return 0;
}

int power(int base ,int  exponent)
{
  int result = 1;
  for(int i=0;i<exponent;i++)
  {
      result= result *base;
  }
  return result;
}