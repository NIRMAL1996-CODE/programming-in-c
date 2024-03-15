//write a program to find total number of duplicate in a array
#include<stdio.h>
int main()
{
    int arr[]= {1,2,2,3,4,2,3,2,2,2};
    int count = 0;
    int size= sizeof(arr)/sizeof(arr[0]);
      for(int i=0; i<size;i++)
      {  
          for( int j=i+1; j<=size;j++)
          {
          if(arr[i]==arr[j])
              {
                count++;
                break;
              }
          }
      }
    
    printf("number of duplicates in an array = %d\n", count);
      
    return 0;
}