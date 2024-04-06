//write a program to print a transpose a matrix array//
#include<stdio.h>
int main()
{
    int a[2][2], trans[2][2];
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
     for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            trans[j][i]=a[i][j];
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}