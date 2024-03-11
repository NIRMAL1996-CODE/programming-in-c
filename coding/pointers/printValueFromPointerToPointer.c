//print tha value of x fromm its pointer to pointer
#include<stdio.h>
int main()
{
    int x=9;
    int  *ptr=&x;
     int **pptr=&ptr;
    printf("%d",**pptr);
    return 0;
}