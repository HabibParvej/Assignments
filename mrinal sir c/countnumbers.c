#include<stdio.h>
int main(){
    int a,b,c,d,e,count=0;
    printf("enter five numbers to check:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a<0)
      count++;
    if(b<0)
      count++;
    if(c<0)
      count++;
    if(d<0)
      count++;
    if(e<0){
      count++;
    }
    printf("The numbers less than 0 is %d :",count);
return 0;
}