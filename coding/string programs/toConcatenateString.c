#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]= "GOOD";
    char str2[]= "MORNING";
    strcat(str1,str2);
    puts(str1);
    return 0;
}