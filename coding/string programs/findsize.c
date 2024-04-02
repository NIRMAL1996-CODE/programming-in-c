//write a c program two ways to find length of character in a string//
#include<stdio.h>
int main()
{
    char s[]="nirmall";
    int size= sizeof(s)/sizeof(s[0]);
    printf("size %d\n",size-1);
    int len, count =0;
    for(int i=0; i<s[i]!='\0';i++)
    {
        count++;
    }
        printf("count %d\n",count);
    
    return 0;
}