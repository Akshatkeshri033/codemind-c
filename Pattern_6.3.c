#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        int x=a-i+1;
        for(int k=1;k<=i;k++){
            printf("%d ",x);
            x++;
        }
        printf("
");
    }
}