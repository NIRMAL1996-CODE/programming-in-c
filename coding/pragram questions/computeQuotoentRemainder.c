#include<stdio.h>
int main()
{
    int dividend, divisor,quotient, remainder;
    printf("enter dividend");
    scanf("%d",&dividend);
    printf("enter divisor");
    scanf("%d",&divisor);
    quotient= dividend/divisor;
    remainder=  dividend % divisor;

     printf("Quotient is %d\n", quotient);
      printf("Remainder is %d\n", remainder);
      return 0;
}