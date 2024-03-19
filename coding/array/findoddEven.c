//write a c program to count the number of even and odd elements in an array//
#include<stdio.h>
int main()
{   
    int counteven= 0, countodd=0;
    int arr[5]={1,2,3,4,4};
    int size =sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size;i++)
    {
        if(arr[i]%2==0)
        {   
            counteven++;
        }
        else
        {  
            countodd++;
        }
    }
            printf("number of odd=%d\n",countodd);
             printf("number of even= %d\n",counteven);
    
    return 0;
}