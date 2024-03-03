//not working
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    int i;
    for( i=2; i<=num-1;i++)
      {
        if(num%2==0)
        break;
      }
       if(i==num)
            printf("%d is a prime number",num);
        else
            printf(" %d is not a prime number",num);
        
        return 0;
    
}