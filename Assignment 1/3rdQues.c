#include<stdio.h>
int main()
{
    float Am,Mth,Eng,Phy,Chem,CS,percentage;
    printf("Enter the marks obtained in Mathematics:");
    scanf("%f",&Mth);
    printf("Enter the marks obtained in English:");
    scanf("%f",&Eng);
    printf("Enter the marks obtained in Physics:");
    scanf("%f",&Phy);
    printf("Enter the marks obtained in Chemistry:");
    scanf("%f",&Chem);
    printf("Enter the marks obtained in Computer Science:");
    scanf("%f",&CS);
    Am=Mth+Eng+Phy+Chem+CS;
    printf("Aggregate Marks is:%f\n",Am);
    percentage=((Mth+Eng+Phy+Chem+CS)/500)*100;
    printf("Total Percentage is:%f\n",percentage);

return 0;
}