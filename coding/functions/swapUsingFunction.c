
// not swaping  and not completed too

#include<stdio.h>
int swapNum(int a, int b); 

int main()
{
    int a=1, b=5 ; 
    swapNum(a,b);
    printf("swap number = %d%d ",a,b );
    return 0;
}

int swapNum(int x , int y)
{
   int temp=x;  
    x=y;  
    y=temp; 
    
}