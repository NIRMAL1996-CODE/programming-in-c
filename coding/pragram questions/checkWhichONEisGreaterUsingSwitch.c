#include<stdio.h>
int main()
{
     int num1 , num2, maximumnumber;
    printf("enter a  first number :\n");
    scanf("%d",&num1);
      printf("enter a  second number :\n");
    scanf("%d",&num2);
    switch(num1>num2)
    {
        case 1 : printf("%d is maximum number",num1);
        break;
       
       case 0 : printf("%d is maximum number",num2);
       break;
        
     }
     return 0;
}