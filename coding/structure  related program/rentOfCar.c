/*create a structure named "car" to store details like car ID , model and rent rate per day. write a c prgram to input data for three cars, calculate
the total rental cost for specified number of days and display the results.
*/
#include<stdio.h>
#include<string.h>
struct car 
{
    char carID[50];
    int model;
    int rentalRatePerDay;
};

int main()
{
    struct car c1;
    strcpy(c1.carID,"Honda");
    c1.model = 1122;
    c1.rentalRatePerDay =200;
   
    printf("First Car = %s\n MODEL= %d\n RENT= %d\n",c1.carID, c1.model, c1.rentalRatePerDay);
    
    struct car c2;
    strcpy(c2.carID,"Suzuki");
    c2.model = 1123;
    c2.rentalRatePerDay =700;
   
    printf("Second Car = %s\n MODEL= %d\n RENT= %d\n",c2.carID, c2.model, c2.rentalRatePerDay);
    
    struct car c3;
    strcpy(c3.carID,"kia");
    c3.model = 1124;
    c3.rentalRatePerDay =900;
   
    printf("Third Car = %s\n MODEL= %d\n RENT= %d\n",c3.carID, c3.model, c3.rentalRatePerDay);
    int days;
    printf("SPECIFIED NUMBER OF DAYS = ");
    scanf("%d",&days);
    
    printf("TOTAL RENT FOR %d DAYS=\nFIRST CAR= %d\nSECOND CAR= %d\nTHIRD CAR= %d\n",days,c1.rentalRatePerDay*days, c2.rentalRatePerDay*days, c3.rentalRatePerDay *days);
    return 0;
}