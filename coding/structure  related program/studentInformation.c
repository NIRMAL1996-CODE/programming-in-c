#include<stdio.h>
#include<string.h>

    struct student
    { 
        char name[100];
        int  rollnum;
        float cgpa;
        
    };

int main()
{
    struct student s1;
    strcpy(s1.name,"Nirmal");
    s1.name [100]= "Nirmal";
    s1.rollnum = 23;
    s1.cgpa = 9.2;
    printf("Student Information =\nNAME = %s\nROLL NUMBER= %d\nCGPA = %.1f\n", s1.name ,s1.rollnum, s1.cgpa);
    return 0;
}