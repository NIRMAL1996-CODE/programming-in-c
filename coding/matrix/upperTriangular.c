//write a program to print upper triangular of matrix//
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("ENTER matrix ELEMENTS=\n");
      for( i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        printf("ELEMENTS=\n");
      for( i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("UPPER TRIANGULAR OF MATRIX ARE= \n");
    for( i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i<j)
           {
             printf("%d ",a[i][j]);
           }
        }
          printf("\n");
    }    
    return 0;
}