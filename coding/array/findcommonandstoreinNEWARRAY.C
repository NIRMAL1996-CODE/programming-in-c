//write a program to find the common numbers in two arrays and store it other array//
#include<stdio.h>
int main()
{
    int a[]={1,2,6,10,8};
    int b[]={2,6,5,10,7};
    int c[20];
    int size1 , size2, size3;
    size1=sizeof(a)/sizeof(a[0]);
    size2=sizeof(b)/sizeof(b[0]);
    size3=sizeof(c)/sizeof(c[0]);
    
    for(int i=0;i<size1;i++)
    {
        for(int j=0 ; j<size2; j++)
        {
            if(a[i]==b[j])
            {
              c[i]=a[i];
             printf("%d\n",c[i]);
           }
       }
    }
    return 0;
}