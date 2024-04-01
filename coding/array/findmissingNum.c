//write a program to find the missing number from 1 to 5 in an array//
#include<stdio.h>
int findmiss(int a[], int len);
int main()
{
    int a[] = {1,3,5,4};
   int size=sizeof(a)/sizeof(a[0]);
    findmiss(a,size);
    return 0;
}
   int findmiss(int a[], int len)
   { 
       int  sum1 =0,sum2=0;
       for(int i= 1;i<=5;i++)
   {
       sum1+=i;
   }
   
   for(int j=0;j<len;j++)
   {
       sum2+=a[j];
   }
   
      int find= sum1-sum2;
       
       printf("%d\n",find);
   }