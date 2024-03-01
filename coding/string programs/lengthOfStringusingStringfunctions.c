#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("enter your string\n");
    fgets(s,100,stdin);
    int len=strlen(s)-1;
    printf("lenght= %d",len);
    return 0;
    
}  