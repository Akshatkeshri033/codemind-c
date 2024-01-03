#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        int c=0,d=0;
       int x=i;
        while(x!=0){
            int r=x%10;
            c++;
            if( r!=0 && i%r==0) d++;
            x/=10;
        }
        if(c==d) printf("%d ",i);
    }
}