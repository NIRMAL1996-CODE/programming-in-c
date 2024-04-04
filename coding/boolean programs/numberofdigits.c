//write a c program to find the number of digits present in a number//
#include<stdio.h>
#include<stdbool.h>
int main()
{   
    int count =0;
    bool positivenum=true;
    int num;
    printf("enter a number= ");
    scanf("%d",&num);
    if(num>0)
    {
        positivenum=true;
    }
    else
    {
        positivenum=false;
    }
      for(int i=num;num>0;i++)
        if(positivenum)
        {
            num=num/10;
            count++;
        }
        printf("number of digits= %d",count);
    
    return 0;
}