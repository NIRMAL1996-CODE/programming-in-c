//write a program to find the maximum element of an array using pointers//
#include<stdio.h>
int findmax(int a[], int length);
int main()
{
    int  size;
    printf("enter size=");
    scanf("%d",&size);
    printf("enter %d elements= ",size);
    int a[size];
    for(int i=0;i<size;i++)
    {
      scanf("%d",&a[i]);
    }
    int maxi= findmax(a, size);
    printf("maximum value= %d",maxi);
    return 0;
}

int findmax(int a[], int length)
{
    int max=a[0];
    for(int i=0;i<length;i++)
    {

        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}