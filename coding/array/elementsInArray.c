//write a  c program to read n number of elements in an array and display them in reverse order
#include<cs50.h>
#include<stdio.h>
int main()
{
  int arr[]= {1 ,2 ,3 , 4, 5}, i;
  int size = sizeof(arr)/sizeof(arr[0]);
  printf("number of elements in an array are %d\n", size);
  for( i=4; i>=0; i--)
  {
     printf("%d ",arr[i]);
  }
  //printf("reverse elements are = %d", arr[i]);
  return 0;
}