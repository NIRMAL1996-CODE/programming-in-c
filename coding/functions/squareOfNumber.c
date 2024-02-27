// find a square of a number.

#include<stdio.h>
int printSquare(int n);

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int square=printSquare(n);
    printf("Square = %d",square);
    return 0;
}

int printSquare(int a)
 {      
    return a*a;
 }