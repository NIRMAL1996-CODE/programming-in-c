/*design a structure to represent a bank account with fields for account number, account holder name, and balance, write the function for deposit
 and withdreawel of amount*/
#include<stdio.h>
#include<string.h>

struct bank
{
    int accnum;
    char name[10];
    float balance;
};
int depositwithdraw(int balance);
int main()
{
    struct bank b1;
    b1.accnum=123654;
    b1.balance=1000.00;
   
    strcpy(b1.name,"NIRMAL");
    //b1.name[10]="NIRMAL";
    printf("name= %s\nacc number=%d\nBalance= %.1f\n",b1.name[10], b1.accnum,b1.balance);
    
    return 0;
}
int depositwithdraw(int balance)
{
    int amount=0;
    int newbalance1=balance+amount;
    int newbalance2=balance-amount;
    if(newbalance1>balance)
    printf("%d amount deposited",newbalance1);
    else if(newbalance2<balance)
     printf("%d amount withdrawel",newbalance2);
}