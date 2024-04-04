//write a program to find whether given number is a perfect number or not//
#include<stdio.h>
#include<stdbool.h>
bool perfect(bool isperfect,int n);
int main()
{   
    bool p;
    int num;
    printf("enter a number= ");
    scanf("%d",&num);
    if(perfect(p,num))
    {
    printf(" %d is a perfect number", num);
    }
    else
    {
         printf(" %d is not a perfect number", num);
    }
    return 0;
}

bool perfect(bool isperfect,int n)
{   
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
       isperfect= true;
    }
    else
    {
       isperfect= false;
    }

return isperfect;
}