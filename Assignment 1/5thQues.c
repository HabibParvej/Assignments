#include<stdio.h>
int main()
{
    int l,b,r,area,area2,parameter,cir;
    printf("Enter the length and Breadth of Rectangle\n");
    scanf("%d %d",&l,&b);
    printf("Enter the Radius of Circle\n");
    scanf("%d",&r);
    area=l*b;
    printf("Area of Rectangle is:%d\n",area);
    parameter=2*(l+b);
    printf("Parameter of Rectangle is:%d\n",parameter);
    area2=3.14*r*r;
    printf("Area of Circle is:%d\n",area2);
    cir=2*3.14*r;
    printf("Circumference of Circle is:%d",cir);

    return 0;
}