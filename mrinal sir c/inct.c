#include<stdio.h>
int main(){
    float inc,at;
    printf("Enter your income: ");
    scanf("%f",&inc);
   if(inc>600000 && inc<=1000000){
   printf("your tax amount is 5000");
   }
   else if(inc>1000000 && inc<=1500000){
   printf("your tax amount is 8000");
   }
   else if(inc>1500000 && inc<=3000000){
   printf("your tax amount is 15000");
   }
  else  if(inc>3000000) {
   printf("your tax amount is 25000");
   }
   else
   printf("Tax free");
return 0;
}