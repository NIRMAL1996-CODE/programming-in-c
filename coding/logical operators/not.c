#include<stdio.h>
int main()
{
    int x, y, z; 
    printf("enter two numbers");
    scanf("%d\n%d",&x,&y);
    z= !x>y;
    printf("%d",z);
    return 0;
}
