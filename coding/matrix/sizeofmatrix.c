//write a c program to find the size and take input of the matrix //
#include<stdio.h>
int main()
{
    int a[2][3];
    int size= sizeof(a)/sizeof(a[0][0]);
    printf("size= %d\n",size);
    printf("ENTER %d ELEMENTS= \n",size);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
             scanf("%d",&a[i][j]);
        }
    }
    return 0;
}