//write a program to find whether the character is vowel or constant//
#include<stdio.h>
#include<stdbool.h>
int main()
{   
    bool isvowel=false;
    char c;
    printf("enter a character= ");
    scanf("%c",&c);
    switch(c)
    {
          case 'a':isvowel= true;
          break;
          case 'e': isvowel= true;
           break;
          case 'i': isvowel= true;
           break;
          case 'o': isvowel= true;
           break;
          case 'u': isvowel= true;
           break;
           default: isvowel= false;
    }
    if(isvowel)
    {
        printf("%c character is vowel",c);
    }
    else
    {
        printf("%c character is constant",c);
    }
    return 0;
}