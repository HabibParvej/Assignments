#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter three numbers to check:");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y && x>z)
    printf("%d is maximun\n",x);
    else if(y>x && y>z)
    printf("%d is maximun\n",y);
    else if(x == y && y==z)
    printf("All the numbers are equal");
    else if(x == y || y==z || z==x)
    printf("two inputs are equal");
    else 
    printf("%d is maximun\n",z);
return 0;
}