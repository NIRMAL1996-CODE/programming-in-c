//write a c program to find the duplicate number in an array//
#include<stdio.h>
void findduplicate(int a[], int len);
int main()
{
    int a[]= {1,2,2,3,3,5};
    int size= sizeof(a)/sizeof(a[0]);
    findduplicate(a,size);
return 0;
}
   void findduplicate(int a[], int len)
   {  
       for(int  i=0; i<len; i++)
       {
            for( int j=i+1; j<len; j++)
              {
                   if(a[i]==a[j])
                   {
                     printf("%d is a duplicate number\n",a[i]);
                   }
              }
       }
   }   