#include<stdio.h>
#include<string.h>
struct book 
{
   char title[100];
   char author[100];
    int  price;
};

int main()
{
    struct book b1;
    //b1.title[100] = "english";
    strcpy(b1.title,"English Book");
    
   // b1.author[100] = "professorjohn"; no need to write it as change value only possible with pointers
    strcpy(b1.author,"Professor John");
    b1.price=100;
    printf("Book title= %s\nAuthor= %s\nPrice= %d\n ",b1.title,b1.author, b1.price);
    return 0;
}