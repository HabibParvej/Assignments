#include<stdio.h>
int main(){
    int c,f;
    printf("Enter temprature:");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("Temprature in celcius is %d:",c);
    return 0;
}