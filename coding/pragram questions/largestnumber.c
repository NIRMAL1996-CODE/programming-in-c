#include<stdio.h>
int main()
{
  int a, b, c;
  printf("enter three numbers");
  scanf("%d\n%d\n%d",&a,&b,&c);
   if(a>b&&a>c)
    {
        printf("%d is largest number",a);
    }
 else if(b>a&&b>c)
    {
     printf("%d is largest number",b);
    }
 else {
     printf("%d is largest number",c);
      }
 return 0;
}