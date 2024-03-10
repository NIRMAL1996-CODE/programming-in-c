// basic declaration of pointer and print address of variable and pointer
#include<stdio.h>
int main()
{
    int age = 27;
    int *ptr=&age;
   
    printf("%p\n",&age); //address of age variable Location (%p)
    printf("%u\n",&age); //address of age in unsigned int(means more easy to read)(%u)
    printf("%u\n",ptr); //address of age in unsigned int(can be write like this)(%u)
    printf("%u",&ptr); //address of ptr variable
    return 0;
}