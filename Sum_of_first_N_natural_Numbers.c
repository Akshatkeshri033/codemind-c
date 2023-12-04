#include<stdio.h>
int main()
{
    int r,i,rev=0,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        rev=rev+i;
    }
    printf("%d",rev);
}