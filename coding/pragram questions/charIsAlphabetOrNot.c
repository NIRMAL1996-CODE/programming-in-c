#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character\n");
    scanf("%d",&ch);
    
     if((ch >='a' && ch <='z') || (ch >='A' && ch <='Z'))
     {
        printf("%c is an alphabet",ch);
     }
     else
     {
        printf("%c is not an alphabet",ch);
     }
     return 0;
}