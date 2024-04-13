//write a program to swap two matrix values//
#include<stdio.h>
int main()
{
    int a[2][3], b[2][3],i,j,temp[2][3];
    printf("ENTER first matrix ELEMENTS=\n");
      for( i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     //prnting 1st matrix before swapping
    for( i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     printf("ENTER second matrix ELEMENTS=\n");
      for( i=0;i<2;i++)
     {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //prnting 2nd matrix before swapping
     for( i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("AFTER SWAPPING MATRIX=\n");
     for( i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
          temp[i][j]=a[i][j];
          a[i][j]=b[i][j];
          b[i][j]=temp[i][j];
        }
    }
    printf("first matrix AFTER SWAPPING\n");
    for( i=0;i<2;i++)
     {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("second matrix AFTER SWAPPING\n");
    for( i=0;i<2;i++)
     {
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}