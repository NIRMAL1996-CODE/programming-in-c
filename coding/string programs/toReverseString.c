#include<stdio.h>
int main()
{
    char s[100];
    printf("enter your string\n");
    fgets(s,100,stdin);
    
    for(int i=6; s[i]!='\0';i--)
    {  
        char name=s[i];
        printf("%c",name);
    }
    return 0 ;
}