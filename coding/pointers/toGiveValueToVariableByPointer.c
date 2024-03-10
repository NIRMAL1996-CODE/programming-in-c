//to print give value to variable through pointer
#include<stdio.h>
int main()
{
    int x;
    int *ptr;
    ptr =&x; //storing address of x in ptr
    *ptr = 10; //storing 0 in address that ptr has
     printf("%d\n",x); //simple assignment
     printf("%d\n",*ptr); //it shows value of variable whose address its containing
     printf("%d",(*(&x))); // -----"  ------   another method
     
    return 0;
}