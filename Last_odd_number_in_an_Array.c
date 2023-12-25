#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int a;
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==1)a=arr[i];
    }
    printf("%d",a);
}