#include<stdio.h>
int main()
{
    int month;
    printf("Enter a month\n ");
   scanf("%d",&month);
    switch(month)
    {
        case 1 : printf("Number of days in January = 31");
          break;
        case 2 : printf("Number of days in Febuary = 28");
          break;
        case 3 : printf("Number of days in March = 31");
          break;
        case 4 : printf("Number of days in April = 30");
          break;
        case 5 : printf("Number of days in May = 31");
          break;
        case 6 : printf("Number of days in June = 30");
          break;
        case 7 : printf("Number of days in July = 31");
          break;
        case 8 : printf("Number of days in August = 31");
          break;
        case 9 : printf("Number of days in Septermber = 30");
          break;
        case 10: printf("Number of days in October = 31");
          break;
        case 11: printf("Number of days  in November= 30");
          break;
        case 12: printf("Number of days  in December= 31");
          break;
          default :printf("INVALID INPUT");
    }
        
    return 0 ;
}