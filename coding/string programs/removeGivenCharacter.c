//write a program to remove a given character from string
//wrong program
#include<stdio.h>
#include<string.h>
char doremove(char st[],int len, char n);
int main()
{
    char s[]="nirmal";
    int len= strlen(s);
    printf("string = %s\n",s);
    char ch;
    printf("ENTER A CHARACTER want to remove =");
    scanf("%c",&ch);
    doremove(s,len, ch);
    return 0;
    
}

char doremove(char st[],int len, char n)
{   
    for(int i=0; i<len; i++)
    {
        if(st[i]==n)
        {
            printf("%c",st[i]);
        }
    }
}