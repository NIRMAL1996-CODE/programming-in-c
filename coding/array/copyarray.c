//write a c program to copy elements of first array in second array
#include<cs50.h>
#include<stdio.h>
int main()
{
    int arr1[] ={ 1, 2 ,3 ,4 , 5} , arr2[10];
     int size= sizeof(arr1);
    for(int i=0; i<size;i++)
    {
            arr2[j]=arr1[i];
    }

    printf("elements copy in second array= \n");
    for(int j =0; j<=arr2[j]; j++)
    {
         printf("%d\n", arr2[i])
         }

    return 0;
}
