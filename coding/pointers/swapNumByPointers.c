//swap two numbers a and b

#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a =4;
    int b =9;
    //int *ptr=&a;
    //int *pptr=&b;
    swap(&a,&b);
    printf("SWAP NUMBERS =\n%d\n%d\n",a,b);
    return 0;
}
//call by referemce (when wn to change value in main function so,thats possible only when return a value through pointers and not by return ())
void swap(int *x ,int *y)
{
   int temp = *x;
    *x = *y;
    *y = temp;
   
}