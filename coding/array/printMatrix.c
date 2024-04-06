//write a program to print a matrix array//
#include<stdio.h>
int main()
{
    int a[3][2];
    int size= sizeof(a)/sizeof(a[0]);
    printf("size = %d\n",size);
     printf("elements= ");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}