#include<stdio.h>

int oddEven(int a);
int main()
{
    int a;  
    printf("Enter a Number");
    scanf("%d",&a); 
    oddEven(a);
    return 0;
}

int oddEven(int num) 
{
    if(num%2==0)
    {
        printf("Number iS EVEN");
    }
    else
    {
        printf("Number is ODD");
    }
}











