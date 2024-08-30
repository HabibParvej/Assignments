#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter three numbers to check:");
    scanf("%d %d %d",&x,&y,&z);
    if(x<y && x<z)
    printf("%d is smallest\n",x);
    else if(y<x && y<z)
    printf("%d is smallest\n",y);
    else
    printf("%d is smallest",z);
return 0;
}