/* write a program tp print a pattern of numbers in the following shape: 1
                                                                         21
                                                                         321
                                                                         4321
                                                                         54321 */
    #include<stdio.h>
    int main()
    {
        int rows;
        printf(" number of rows= ");
        scanf("%d",&rows);
         for(int i=1; i<=rows;i++)
         {
             for(int j=i; j>=1; j--)
             {
                 printf("%d",j);
                 
             }
                 printf("\n");
         }
         return 0;
    }