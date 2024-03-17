/*write a c program to design a structure named product with attributes name , price, and quantity. 
write a function called calculateTotalPRICE THAT takes a product object as input and returns the total price*/
#include<stdio.h>
#include<string.h>
 struct product
{
    char name[20];
    int quantity;
    float price;
};

float calcTotalPrice(struct product p1);
int main()
{
    struct product p1;
    strcpy(p1.name,"soap");
    p1.quantity = 5;
    p1.price = 10.20;
    float total = calcTotalPrice(p1);
    printf("TOTAL PRICE OF A PRODUCT = %f",total);
    return 0;
}
 
 float calcTotalPrice(struct product p1)
 {
     return p1.quantity*p1.price;
 }
