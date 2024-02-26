//not getting correct output 

#include<stdio.h>
int main()
{
    int a, b;  
    printf("Enter two number");
    scanf("%d\n%d",a,b);
    sum = add(a,b);
    printf("sum is %d",sum);
    return 0;
    
}
  
  void add()
  {
    int x, y, z;
    printf("enter two number");
    scanf("%d\n%d",x,y);
    z= x+y;  
    printf("%d",z);
    return (x+y);  
  }