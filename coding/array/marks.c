#include<stdio.h>
int main()
{
    //int marks[] ={98, 99, 88}; size can be mention or not its just the same thing
    //int marks[3]={98, 99, 88};
    int marks[3];
    printf("enter marks of maths");
    scanf("%d",&marks[0]);
    printf("enter marks of english");
    scanf("%d",&marks[1]);
    printf("enter marks of science");
    scanf("%d",&marks[2]);
    printf("maths= %d, english= %d, science=%d",marks[0],marks[1],marks[2]);
    return 0;
}