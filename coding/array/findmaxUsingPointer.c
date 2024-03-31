//write a program to find the maximum element of an array using pointers//
#include<stdio.h>
int findmax( int length, int *a);
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
    int maxi= findmax(size, a);
    printf("maximum value= %d",maxi);
    return 0;
}

int findmax(int length, int *a)
{
    int max=*a;
    for(int i=0;i<length;i++)
    {

        if(max<*(a+i))
        {
           max=*(a+i);
        }
    }
    return max;
}