//to do addition in value of variable through pointer
#include<stdio.h>
int main()
{
    int x;
    int *ptr;
    ptr =&x; 
    *ptr = 10; 
    
    *ptr+=2;  // like this u  can add values too
    //*ptr*=2;
    //*ptr/=2;
   // *ptr%=2;
    //*ptr-=2;
     printf("%d\n",x); 
     printf("%d\n",*ptr); 
     printf("%d",(*(&x))); 
     
    return 0;
}