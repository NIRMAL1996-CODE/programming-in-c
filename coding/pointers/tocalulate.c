//write a function to calculate sum , product and average of two numbers.print that average in the main function
#include<stdio.h>
//void calc(int a , int b );
void calc(int a , int b ,int *sum, int *product,int *average );
int main()
{
    int a=9;
    int b=4;
    int sum, product ,average;
    calc(a,b, &sum, &product, &average);
      printf("sum = %d\n product = %d\n average = %d\n", sum ,product ,average);
    return 0;
}

void calc(int x , int y, int *sum, int *product, int *average)
{
     *sum = x+y;
     *product = x*y;
    *average = (x+y)/2;
  
}