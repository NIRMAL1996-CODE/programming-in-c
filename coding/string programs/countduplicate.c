//write a c program to find duplicate  character and count their occurence in a string//
#include<stdio.h>
char findsame(char a[], int len);
int main()
{   
    
    char s[]="niirrmall";
    int size= sizeof(s)/sizeof(s[0])-1;
    printf("size %d\n",size);
     findsame(s,size);
       
    return 0;
}
char findsame(char a[], int len)
{  
    int count=0;
    char d;
    for(int i=0; i<len; i++)
    {
          for(int j=i+1; j<len; j++)
          {
              if(a[i]==a[j])
              {
                  d=a[i];
                  count++;
                printf("%d times %c is duplicate\n",count, d);
              }
          }
    }
    return d;
}