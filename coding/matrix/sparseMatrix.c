//write a program to check whether a matrix is sparse or not //
#include<stdio.h>
int main()
{
    int a[2][2], i, j;
    int count=0;
    int size= sizeof(a)/sizeof(a[0][0]);
    printf("enter elements \n");
    for( i=0;i<2;i++)
    {
        for( j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for( i=0;i<2;i++)
    {
      for( j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     for( i=0;i<2;i++)
    {
      for( j=0;j<2;j++)
        if(a[i][j]!=0)
         {
           count+=1;
          }
    }
   
    if(count<(size/2))
    {
        printf("matrix is a sparse matrix");
    }
    else
    {
         printf("matrix is not a sparse matrix");
    }
    
   return 0;
}