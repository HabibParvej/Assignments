#include<stdio.h>
int main()
{
    int n,a=0;
    printf("Enter any four digit number:");
    scanf("%d",&n);
    while(n!=0)
    {
       n=n%10;
       a=a+n;
       n=n/10;
    }
    a=a+n;
    printf("sum of first and last number is :%d\n",a);
    return 0;
}