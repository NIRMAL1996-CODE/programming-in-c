#include<stdio.h>
int main()
{
    int a; 
    printf("Enter a number");
    scanf("%d",&a);
    long num=a;     // long is useed for more memory for integer and its not for flaot and char datatype
    printf("%ld\n",num);
    printf("size of long %lu bytes",sizeof(long ));
    return 0;
}