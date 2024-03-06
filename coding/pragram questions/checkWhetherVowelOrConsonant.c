#include<stdio.h>
int main(){
    char ch;
    printf("enter a character :\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a' : printf("character is a vowel");
        break;
        case 'e' : printf("character is a vowel");
         break;
        case 'i' : printf("character is a vowel");
         break;
        case 'o' : printf("character is a vowel");
         break;
        case 'u' : printf("character is a vowel");
         break;
        default : printf("character is a consonant");
     }
     return 0;
}