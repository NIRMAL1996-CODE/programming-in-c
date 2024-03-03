//program to count number of digits in a number
#include<stdio.h>
int main()
{
    int num, count=0;
    printf("enter a number\n");
    scanf("%d",num);
    while(num!=0)
      {
            num=num/10;
            count++;
      }
          printf("number of digits = %d", count);

      
    return 0;
}