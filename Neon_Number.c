#include<stdio.h>
int main()
{
    int n,sum=0,m,a;
    scanf("%d",&n);
    a=n*n;
    while(a>0)
    {
        m=a%10;
        sum=sum+m;
        a=a/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}