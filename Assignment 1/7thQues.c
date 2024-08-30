#include<stdio.h>
int main()
{
    int n,a=0;
    printf("Enter any five digit number:");
    scanf("%d",&n);
    while(n!=0)
    {
       n=n%10;
       a=a+n;
       n=n/10;
    }
    printf("Sum of Numbers is :%d\n",a);
    return 0;
}