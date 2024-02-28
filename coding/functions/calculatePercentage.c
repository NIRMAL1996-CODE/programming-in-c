#include<stdio.h>
int calcpercentage(int maths,int english, int science, int computer);
int main()
{
    int maths, english, science, computer;
    printf(" enter marks of maths= ");
    scanf("%d",&maths);
     printf(" enter marks of english= ");
    scanf("%d",&english);
     printf(" enter marks of science= ");
    scanf("%d",&science);
     printf(" enter marks of computer= ");
    scanf("%d",&computer);
       
    printf("percentage = %d" , calcpercentage(maths,english,science,computer));
    return 0;
}

  int calcpercentage(int math, int eng, int sci, int com)
{   
    return (math+eng+sci+com)/4;
}