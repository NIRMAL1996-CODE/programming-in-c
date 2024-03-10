// to print value of variable using pointer

#include<stdio.h>
int main()
{   
    
    int n =90;
    int *ptr=&n;
    
    printf("%p\n",&n); //address of age variable Location (%p)
    printf("%u\n",&n); //address of age in unsigned int(means more easy to read)(%u)
    printf("%u\n",ptr); //address of age in unsigned int(can be write like this)(%u)
    printf("%u\n",&ptr); //address of ptr variable
    
    //how to print values using pointer
    
    printf("%d\n",n);
    printf("%d\n",*ptr);
    printf("%d",(*(&n)));
    return 0;
}