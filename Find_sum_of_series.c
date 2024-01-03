#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    float sum=0;
    for(float i=1;i<=a;i++){
        sum+=(1/i);
    }
    printf("%.2f",sum);
}