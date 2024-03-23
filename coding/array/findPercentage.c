//write a program to print the marks of subjects and calculate percentage//
#include<stdio.h>
int percent(int arr[],int size);
int main()
{
    int arr[5];
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("enter marks of %d subjects\n",size);
    for(int i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    
    printf("marks of MATHS= %d\n",arr[0]);
    printf("marks of ENGLISH= %d\n",arr[1]);
    printf("marks of MORAL= %d\n",arr[2]);
    printf("marks of SANSKRIT= %d\n",arr[3]);
    printf("marks of HINDI= %d\n",arr[4]);
    int percentage=  percent( arr, size);
    printf("PERCENTAGE = %d%",percentage);
    return 0;
    
}
int percent(int arr[],int size)
{   
    int sum=0;
    for(int i=0; i<size; i++)
    {
      sum= sum+arr[i];
    }
      
    
    return sum/size;
}