//write a program to find whether the matrices are equal or not//
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a[2][2], b[2][2],i,j;
    bool equal;
    printf("ENTER matrix1 ELEMENTS=\n");
      for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
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
     printf("ENTER matrix2 ELEMENTS=\n");
      for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
        printf("ELEMENTS=\n");
      for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           if(a[i][j]!=b[i][j])
           {
             equal=false;
           }
           else 
           {
            equal=true;
           }
        }
    }    
    if(equal==false)
    {
         printf("matrices are not equal\n");
    }
    else if(equal==true)
    {
        printf("matrices are equal\n");
    }
   
    return 0;
}