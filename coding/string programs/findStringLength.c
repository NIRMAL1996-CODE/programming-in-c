#include<stdio.h>
int countlength(char arr[]);
int main()
{
    char st[100] ;
     
    printf("enter your string\n");
    fgets(st,100,stdin);
    printf("length of string = %d",countlength(st));
    return 0;
}

int countlength(char arr[])
{   
    int len=0;
    for(int i=0;arr[i]!='\0';i++)
    {    
        len++;
    }
      return len;
}
