#include<stdio.h>
int main()
{
    int num[3];
    printf("enter three numbers= ");
    scanf("%d\n%d\n%d",&num[0],&num[1],&num[2]);
    int sum = num[0]+num[1]+num[2];
    printf(" sum of numbers = %d",sum);
    return 0;
}