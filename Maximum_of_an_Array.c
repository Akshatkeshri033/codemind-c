#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int array[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    int max= array[0];
    for(j=1; j<n; j++)
    {
        if(max<array[j])
        max=array[j];
    }
    printf("%d",max);
}