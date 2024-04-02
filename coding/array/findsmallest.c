//write  a c program to find the second smallest number in an given array

#include<stdio.h>
int secondsmall(int a[] ,int size);
int main()
{
    int a[]={11,22,8,10};
    int size= sizeof(a)/sizeof(a[0]);
     secondsmall(a,size);
    return 0;
    
}
int secondsmall(int a[] ,int size)
{   
    int small=a[0], secondsmall=a[0];
    for(int i=1; i<size; i++)
    {    
          if(small>a[i])
          {
              small= a[i];
            
              //printf("%d\n",index);
          }
        
    }
    for(int i=1;i<size;i++)
    {
        if(secondsmall>a[i] &&small!=a[i])
        {
            secondsmall=a[i];
        }
    }
    printf("%d is the smallest number\n",small);
     printf("%d is the second smallest number",secondsmall);
}