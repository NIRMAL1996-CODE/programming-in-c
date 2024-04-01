//write a program to find the pair of integer array whose sum is equal to a given number//
#include<stdio.h>
void findpair(int a[], int size, int num);
int main()
{
    int a[] ={ 1,2,3,4,5};
    int size= sizeof(a)/sizeof(a[0]);
    int n;
    printf(" enter a number between 1 to 5 = ");
    scanf("%d",&n);
    findpair(a,size, n);
    return 0;
}

void findpair(int a[], int size, int num)
{    
    for(int i=0; i<size-1; i++)
    {
        for(int j=i+1; j<size; j++)
       {
           if(a[i]+ a[j] == num)
           {
               printf("%d %d is a pair of %d \n", a[i], a[j], num);
               
           }
       }
    }
   
}