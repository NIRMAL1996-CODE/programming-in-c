#include<stdio.h>
int main()
{
    char ch;
    printf("enter character\n");
    scanf("%c",&ch);
    
    if('a'==ch||'e'==ch||'i'==ch||'o'==ch||'u'==ch)
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}
