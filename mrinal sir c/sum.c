#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter any two numbers:");
    scanf("%f %f",&a,&b);
    if(a>0 && b>0 && a+b>40){
    printf("Sum is :%f\n",a+b);
    }
    else
    printf("Invalid input\n");
    return 0;
}