#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    scanf("%[^
]s",ch);
    int c=0,i;
    for(i=0;ch[i];i++){
        if(ch[i]==32) c++;
    }
    if(i>0) c++;
    printf("%d",c);
}