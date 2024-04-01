//write a c program to remove duplicate from an given array//
#include<stdio.h>
int  removeduplicate(int *p, int a[],int size);
int main()
{
    int a[]= {11,22,44,11,55,55};
    int size= sizeof(a)/sizeof(a[0]);
    removeduplicate(a,size);
    return 0;
}

int  removeduplicate(int *p,int a[],int size)
{
    *p=0;
    for(int i=0; i<size; i++)
    {   
      for(int j=i+1; j<size; j++)
        if(a[i]==a[j])
        {
           *p=a[i];
           (*p)--;
        }
    }
    for(int k=0;k<size; k++)
    printf("ARRAY= %d",*p);
}