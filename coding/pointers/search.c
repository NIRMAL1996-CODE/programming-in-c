//implement a function to search for a given elements in an array using pointers//
#include<stdio.h>
void search(int a[],int b, int size, int *p);
int main()
{
    int a[]={1,2,6,5,8};
    int size =sizeof(a)/sizeof(a[0]);
    int*p;
    p=&a[size];
    int x;
    printf("enter a element= ");
    scanf("%d",&x);
    search(a,x,size,p);
   // printf("%d  is present",*p);
    return 0;
}

void search(int a[],int b, int size, int *p)
{ 
    for(int i=0; i<size;i++)
    {
        *p= a[i];
       
             if(*p==b)
           {
             printf("yes ");
           }
     }       
}