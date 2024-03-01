#include<stdio.h>
int main()
{
    char st[100];
    int countvowel=0, countcon=0;
    printf("Enter the string: ");
    fgets(st,100,stdin);
    
    for(int i=0; st[i]!='\0'; i++)
    {
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
        {
            countvowel++;
        }
        else   
        {
            countcon++;
        }
    }
    printf("vowel = %d and consonant= %d",countvowel, countcon);
    return 0;
}