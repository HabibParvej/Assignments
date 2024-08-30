#include<stdio.h>
int main(){
    int x,y,z,avg,add=0,prod;
    printf("Enter three numbers to check:");
    scanf("%d %d %d",&x,&y,&z);
    avg=(x+y+z)/3;
    if(avg>=23){
    prod=x*y*z;
    printf("product is %d\n",prod);
     }
    else 
     {
      add=23-avg;
      printf("add %d to average\n",add);
     }
return 0;
}