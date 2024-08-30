#include<stdio.h>
int main()
{
    int n,a=0,r;
    printf("Enter any five digit number:");
    scanf("%d",&n);
    while(n!=0)
    {
       r=n%10;
       a=a*10+n;
       n=n/10;
    }
    printf("Reverse of number is :%d\n",a);
    return 0;
}