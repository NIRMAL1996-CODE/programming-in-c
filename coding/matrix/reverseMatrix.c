//write a program to reverse a matrix //
#include<stdio.h>
int main()
{
    int a[3][3], i,j;
    printf("ENETER ELEMENTS \n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
          scanf("%d",&a[i][j]);
      }
    }
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
          printf("%d  ",a[i][j]);
      }
          printf("\n");
    }
    printf("reversed matrix \n");
          for(i=0;i<3;i++)
          {
             for(j=3-1;j>=0;j--)
             {
               printf("%d  ",a[i][j]);
             }
             printf("\n");
          }
    return 0;
}