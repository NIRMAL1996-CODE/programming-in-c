//how to check if a string contains digits//
#include<stdio.h>
#include<string.h>
char find(char x[], int len);
int main()
{
    char st[]="nirmal2252";
    int length= strlen(st);
    find(st,length);
    return 0;
}

char find(char x[], int len)
{
    for(int i=0; i<len; i++)
    {
      if(x[i]>='1' && x[i]<='9')
      {
          printf("%c is a digit\n",x[i]);
      }
    }
}