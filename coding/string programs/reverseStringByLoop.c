#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
printf("enter a string \n");
fgets(s,50,stdin);
int length= strlen(s)-1;
printf("%d",length);

for(int i = length; s[i]!='\0';i--)
{
    char string=s[i];
    printf("%c",string);
}
return 0;
}