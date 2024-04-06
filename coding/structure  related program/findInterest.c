//write a program to find the simple interest//
#include<stdio.h>
struct simpleInterest
{
    int principle;
    float rate;
    int ttime;
};
int main()
{
    struct simpleInterest si;
    printf("enter principle amount= ");
    scanf("%d",&si.principle);
     printf("enter rate of interest= ");
    scanf("%d",&si.rate);
     printf("enter time(in years)= ");
    scanf("%d",&si.ttime);
    float simpleinterest= (si.principle * si.rate * si.ttime)/100;
    printf("simpleinterest = %.2f",simpleinterest);
    return 0;
}