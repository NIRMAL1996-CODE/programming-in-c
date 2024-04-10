//c //
#include<stdio.h>
int main()
{
    int a[2][2], i, j;
    int small;
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
    small=a[0][0];
     for( i=0;i<2;i++)
    {
      for( j=0;j<2;j++)
        if(max>a[i][j])
         {
           max=a[i][j];
          }
    }
    printf("smallest number in a matrix = %d",max);
   return 0;
}