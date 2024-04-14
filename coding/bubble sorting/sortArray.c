//write a program to sort an array using bubble sorting//
#include<stdio.h>
int main()
{
    int a[]={20,10,30,100,50},temp, j;
    int size= sizeof(a)/sizeof(a[0]);
        for( j=0;j<size; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
             printf(" %d \n",a[j]);
        }
    return 0;
}