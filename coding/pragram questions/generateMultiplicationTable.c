#include<stdio.h>
int main()
{
    int a, table;  
    printf("Enter a number\n");
    scanf("%d",&a);
     for(int i=1; i<=10;i++)
      {
        table = a * i;
        printf("%d\n",table);
      }
      return 0;
}