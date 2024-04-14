//write a program to perform binary search on a rotated sorted array.//
#include<stdio.h>
#include<stdbool.h>
int main()
{
    float a[]={1.1,2.2,3.3,4.4,6.6,7.7};
    int size= sizeof(a)/sizeof(a[0]);
    float key;
    int low=0,high=size-1,mid=0;
    bool flag=false;
    printf("enter floating point number to search=\n");
    scanf("%f",&key);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            flag=true;
            break;
        }
        else if(key<a[mid])
        {
             high=mid-1;
        }
        else
        {
           low=mid+1;
        }
    }
    if(flag==true)
    {
        printf("number is found\n",key);
    }
    else
    {
        printf("number is not found");
    }
    return 0;
}