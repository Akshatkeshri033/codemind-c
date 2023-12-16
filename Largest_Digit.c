#include<stdio.h>
int main()
{
    int n ,lar=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(lar<r)
        {
            lar=r;
        }
        n/=10;
    }
    printf("%d",lar);
}