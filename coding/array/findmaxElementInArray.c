/*Function with Array Parameter: Develop a C program with a function called findMax that takes an integer array as a parameter
 and returns the maximum element in the array. Call this function from main and print the result*/
 //wrong program ,unable to make it

#include<stdio.h>
int findmax(int max[]);
int main()
{   
    int max[10] = {1,2,3,4,5};
    int findmax(max);
    return 0;
}

int findmax(int max[])
{
    for(int i=0; i<max[10]; i++)
    
    {
        printf("maximum elements = %d",max[i]);
    }
}