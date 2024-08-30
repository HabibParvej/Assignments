#include<stdio.h>
int main()
{
    float salary,DA,HR,GS;
    printf("Enter Ramesh's Salary:");
    scanf("%f",&salary);
    DA=(40/salary)*100;
    HR=(20/salary)*100;
    GS=salary+DA+HR;
    printf("Gross salary is :%f\n",GS);
    return 0;
}