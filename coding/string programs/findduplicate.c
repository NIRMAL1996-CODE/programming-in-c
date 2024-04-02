//write a c program to find duplicate  character in a string//
#include<stdio.h>
char findsame(char a[], int len);
int main()
{   
    
    char s[]="nirrmall";
    int size= sizeof(s)/sizeof(s[0])-1;
    printf("size %d\n",size);
     findsame(s,size);
       
    return 0;
}
char findsame(char a[], int len)
{
    char d;
    for(int i=0; i<len; i++)
    {
          for(int j=i+1; j<len; j++)
          {
              if(a[i]==a[j])
              {
                  d=a[j];
                     printf("%c is duplicate\n",d);
              }
          }
    }
    return d;
}