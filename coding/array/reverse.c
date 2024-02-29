#include<stdio.h>
int main()
 {
    int rev[] = {1,2,3,4,5};

    int temp=rev[0];
        rev[0]=rev[1];
        rev[1]=rev[2];
        rev[2]=rev[3];
        rev[3]=rev[4];
        rev[4]=temp;
    printf("Reverse numbers = %d %d %d %d %d",rev[0],rev[1],rev[2],rev[3],rev[4]);
    return 0;

 }
