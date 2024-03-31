//write a program to find the intersection of 2 array using pointers//
#include<stdio.h>
int findcommon(int x[],int y[],int s1, int s2);
int main()
{
    int a[5]= {2,3,5,66,9};
    int size1=sizeof(a)/sizeof(a[0]);
    int b[5]= {13,66,9,37,5};
    int size2=sizeof(b)/sizeof(b[0]);
    
     int result= findcommon(a,b,size1,size2);
   
    return 0;
    
}
int findcommon(int x[],int y[],int s1, int s2)
{  
    printf("intersection of two array ");
    for(int i=0; i<s1; i++)
    {
        for(int j=0; j<s2; j++)
        {
            if(x[i]==y[j])
            {
           printf("%d ",y[j]);
            }
        }
    }
}