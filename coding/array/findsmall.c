// write a c program to find the smallest element of an array using pointers
#include<stdio.h>

int findsmall(int*x, int size);
int main()
{
    int x[5]={55,60,8,3,2};
    int len =sizeof(x)/sizeof(x[0]);
     int small= findsmall(x,len);
    printf("smallest element = %d",small);
    return 0;
}
int findsmall(int*x, int size)
{

    int small=*x;
    for(int i=0;i<size;i++)
    {
        if(small<*(x+i))
        {

            small=*(x+1) ;
        }
    }

    return small;
}
