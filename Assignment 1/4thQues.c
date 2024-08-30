#include<stdio.h>
int main()
{
    int Far,Cent;
    printf("Enter the Temprature:");
    scanf("%d",&Far);
    Cent=(Far-32)*5/9;
    printf("Temprature in Centigrade is:%d\n",Cent);
    return 0;
}