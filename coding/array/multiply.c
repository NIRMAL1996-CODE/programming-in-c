#include<stdio.h>
int main()
{
    int num[4];
    printf("enter three numbers= ");
    scanf("%d\n%d\n%d\n%d",&num[0],&num[1],&num[2],&num[3]);
    int product = num[0]*num[1]*num[2]*num[3];
    printf(" product of numbers = %d",product);
    return 0;
}