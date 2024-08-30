#include<stdio.h>
int main()
{
    float a,b,c,avg;
    printf("Enter any two numbers:");
    scanf("%f %f %f",&a,&b,&c);
    avg = (a+b+c)/3;
    printf("Sum is :%f\n",avg);

    return 0;
}