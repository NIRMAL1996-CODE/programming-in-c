//write a program to subtract two matrices//
#include<stdio.h>
int main()
{
    int a[2][3], b[2][3],  c[2][3],i,j;
    printf("ENTER first matrix ELEMENTS=\n");
      for( i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
     printf("ENTER second matrix ELEMENTS=\n");
      for( i=0;i<2;i++)
     {
        for(j=0;j<3;j++)
        {
            scanf("%d ",&b[i][j]);
        }
    }
    //prnting 1st matrix
    for( i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //prnting 2nd matrix
     for( i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
     for( i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           c[i][j]=a[i][j]-b[i][j];
        }
    }
    for( i=0;i<2;i++)
     {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}