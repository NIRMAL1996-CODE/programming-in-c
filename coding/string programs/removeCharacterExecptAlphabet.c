#include<stdio.h>
int main()
{
    char st[100];
    printf("enter the string\n");
    fgets(st,100,stdin);
    
    for(int i=0; st[i]!='\0';i++)
     {
         if((st[i]>='a' && st[i]<='z') || (st[i]>='A' && st[i]>='Z'))
         {
             printf("%c",st[i]);  
         }
     }
     return 0;
}