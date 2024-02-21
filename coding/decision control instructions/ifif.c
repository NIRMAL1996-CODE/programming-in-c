#include<stdio.h>
main()
{
    int a ;  
    printf("enter a number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("positive");
    }
    if(a<0)
    {
        printf("non positive");
    }
    return 0;
}