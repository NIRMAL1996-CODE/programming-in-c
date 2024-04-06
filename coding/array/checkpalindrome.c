//write a program to find the given array is palinfrome or not//
#include<stdio.h>
int palindrome(int n[], int size);
int main()
{   
    int result=0 ,size,a[size];
     size= sizeof(a)/sizeof(a[0]);
    printf("ENTER %d  elements= ", size);
    scanf("%d",&a[size]);
    result= palindrome(a, size);
    if(result==a[size])
    {
    printf(" %d is palindrome number\n",a[size]);
    }
    else
    {
     printf("%d is not a palindrome number\n",a[size]);
    }
    return 0;
}
int palindrome(int n[],int size)
{   
    int rev=0;
    for(int i=size;i>0;i--)
    {
         rev= n[i];
        printf("%d",rev);
    }
    
}