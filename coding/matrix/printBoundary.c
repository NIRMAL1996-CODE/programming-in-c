//write a program to print the boundary of the matrix //
#include<stdio.h>
int main()
{
    int a[3][3], i, j;
    int size= sizeof(a)/sizeof(a[0][0]);
    printf("enter elements \n");
    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for( i=0;i<3;i++)
    {
      for( j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     for( i=0;i<3;i++)
    {
      for( j=0;j<3;j++)
        {
            if(i==0||i==3-1||j==0||j==3-1)
            {
            printf("%d ",a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
  
   return 0;
}