//write a program to find the greater number among two numbers//
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a, b;
    printf("enter two numbers= ");
    scanf("%d %d",&a,&b);
    bool max= false;
    max =(a>b)? true: false;
    if(max==true)
    {
        printf("%d is a maximum number", a);
    }
    else if(max==false)
    {
        printf("%d is a  maximum number",b);
    }
    return 0;
}