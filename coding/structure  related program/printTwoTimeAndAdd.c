//create a structure named time with memebers hours , minutes and seconds.
//write a c program to input two times , add them , and diplay the result
#include<stdio.h>

 struct time
 {
     int hours;
     int minutes;
     int seconds;
 };
 
int main()
{
    struct time t1;
    t1.hours =2;
    t1.minutes =10;
    t1.seconds =05;
    
    printf("TIME = %d:%d:%d\n",t1.hours,t1.minutes,t1.seconds);
    
     struct time t2;
    t2.hours =4;
    t2.minutes =15;
    t2.seconds =25;
    
    printf("TIME = %d:%d:%d\n",t2.hours,t2.minutes,t2.seconds);
    
    printf("AFTER ADDITION TIME = %d:%d:%d",t1.hours + t2.hours,t1.minutes+t2.minutes,t1.seconds+ t2.seconds);
    return 0;
    
}