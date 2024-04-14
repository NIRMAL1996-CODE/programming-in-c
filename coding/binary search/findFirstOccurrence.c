//write the binary search program to find first occurence of given elements in the sorted array //
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int size= sizeof(a)/sizeof(a[0]);
    int key, low=0,high=size-1,mid=0;
    bool flag=false;
    printf("enter  number to search=\n");
    scanf("%d",&key);
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
    if(flag)
    {
        printf("number %d is found at index %d of array\n",key,mid);
    }
    else
    {
        printf("number %d is not found\n");
    }
    return 0;
}