//write a program to perform binary search on a sorted array of integers.//
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a[]={10,20,30,40,50};
    int size= sizeof(a)/sizeof(a[0]);
    int key,low=0,high=size-1,mid=0;
    bool flag=false;
    printf("ENTER THE KEY ELEMENT between 10 to 50=\n");
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
    if(flag==true)
    {
        printf("key is found\n",key);
    }
    else
    {
        printf("key not found");
    }
    return 0;
}