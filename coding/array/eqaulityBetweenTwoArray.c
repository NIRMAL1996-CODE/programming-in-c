//write a c program to find the two array are same or not//
#include<stdio.h>
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,2,3,4,5};
    int size=sizeof(arr1)/sizeof(arr1[0]);
    
    for(int i=0;i<size;i++)
    {
        if(arr1[i]!=arr2[i])
        {
           printf("not equal");
        }
    }
      printf("equal");
    
    return 0;
    
}