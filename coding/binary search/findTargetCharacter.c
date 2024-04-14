//write a program to search a specific character in a sorted array of characters using binary search.//
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    char a[]="nirmal";
    int length= strlen(a);
    char key,low=0,high=length-1,mid=0;
    bool flag=false;
    printf("enter character=\n");
    scanf("%c",&key);
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
        printf("character is found\n",key);
    }
    else
    {
        printf("character is not found");
    }
    return 0;
}