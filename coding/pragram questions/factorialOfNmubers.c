#include<stdio.h>
int main()
{
    int a , factorial=1;
    printf("Enter a number\n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
     {
        factorial= factorial* i;    
     }
     printf("factorial of %d = %d",a,factorial);
     
     return 0;
}