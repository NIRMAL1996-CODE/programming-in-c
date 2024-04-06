//write a program to find the simple interest//
#include<stdio.h>
struct simpleInterest
{
    int principle;
    float rate;
    int ttime;
};
int s_interest(struct simpleInterest si);
int main()
{
    struct simpleInterest si;
    printf("enter principle amount= ");
    scanf("%d",&si.principle);
     printf("enter rate of interest= ");
    scanf("%f",&si.rate);
     printf("enter time(in years)= ");
    scanf("%d",&si.ttime);
    int interest= s_interest(si);
    printf("simpleinterest = %d",interest);
    return 0;
}
int s_interest(struct simpleInterest si)
{
    float s_interest= (si.principle * si.rate * si.ttime)/100;
    return s_interest;
}