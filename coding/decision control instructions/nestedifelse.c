#include<stdio.h>
main()
{
    int a, b,c ;
    printf("enter three number");
    scanf("%d\n%d\n%d",&a,&b,&c);
     if(a>b)
     {
        if(a>c)
            printf("%d",a);
        else
          printf("%d",c);
        
     }
     else 
     {
        if(b>c)
        printf("%d",b);
        else
        printf("%d",c);
     }
     return 0;
}