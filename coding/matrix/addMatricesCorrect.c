/*write a c program to add two the matrix 
*/
#include<stdio.h>
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[2][3]={{9,8,7},{5,2,1}};
    int sum[2][3], i,j;
     printf("matrix1 ELEMENTS= \n");
    for( i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
          printf("\n");
    }
      printf("matrix2 ELEMENTS= \n");
    for( i=0;i<2;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
      for( i=0;i<2;i++)
    {
        for( j=0;j<3;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    
    printf("sum of matrices= \n");
     for( i=0;i<2;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d ",sum[i][j]);
        }
         printf("\n");
    }
    return 0;
}