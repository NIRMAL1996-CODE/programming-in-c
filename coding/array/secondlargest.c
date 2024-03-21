//write a program to find the second largest element in an array//
#include<stdio.h>
int main()
{
    int arr[20]={10,2,6,90,55,20};
    int size= sizeof(arr)/sizeof(arr[0]);
    int secondmax =arr[0], max= arr[0];
    
    for(int i=1; i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            printf("%d\n",max);
        }
    }
        for(int j=1;j<size;j++)
        {
            if(arr[j]<max&& arr[j]>secondmax)
            {
                secondmax=arr[j];
            }
        }
     
              printf("second largest element in array= %d\n", secondmax);
    
    return 0;
}