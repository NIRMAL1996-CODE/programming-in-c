//write a program to chcek if a matrix is symmetric or not//
#include<stdio.h>
int main()
{
    int a[2][2], b[2][2],i,j;
    printf("ENTER first matrix ELEMENTS=\n");
      for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
        printf("ELEMENTS=\n");
      for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for( i=0;i<2;i++)//transpose
    {
        for(j=0;j<2;j++)
        {
           b[j][i]=a[i][j];
        }
    }    
    for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    if( a[i][j]==b[i][j])
    {
        printf("matrix is symmetric");
    }
    else
    printf("matrix is not symmetric");
    
    return 0;
}