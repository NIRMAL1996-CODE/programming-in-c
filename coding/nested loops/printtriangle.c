/*write a program that uses nested loops to print s psttern of asterisks(*) in the following shape:
                     *
                     **
                     ***
                     ****
                     *****    */
                     
    #include<stdio.h>
    int main()
    {
        int n;
        printf("enter number of rows= ");
        scanf("%d",&n);
        
         for(int i=1; i<=n;i++)
         {
             for(int j=1;j<=i;j++)
             {
                 printf("*");
             }
             printf("\n");
         }
         
         return 0;
    }