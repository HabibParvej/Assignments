#include<stdio.h>
int main(){
 int a,b,c;
 printf("Enter the first number:");
 scanf("%d",&a);
printf("Enter the Second number:");
 scanf("%d",&b);
 c=a;
 a=b;
 b=c;
 printf("Swapped number is: %d %d",a,b);
 return 0;
}