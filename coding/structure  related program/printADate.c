#include<stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct date d1;
    d1.day= 29;
    d1.month=11;
    d1.year=1996;
    printf("DAY = %d\nMONTH = %d\nYEAR = %d\n",d1.day, d1.month, d1.year);
    return 0;
}