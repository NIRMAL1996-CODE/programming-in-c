#include<stdio.h>
 struct rectangle
 {
    int length;
    int width;
 };
 
 int calcArea(int length , int width );
 int main()
 {
     struct rectangle R1;
    // R1.length;
     printf("enter lenghth= ");
     scanf("%d",&R1.length);
    // R1.width;
     printf("enter width= ");
     scanf("%d",&R1.width);
     int area= calcArea(R1.length,R1.width);
     printf("AREA OF RECTANGLE = %d",area);
     return 0;
     
 }
  int calcArea(int l , int w )
  {
      return l*w;
  }