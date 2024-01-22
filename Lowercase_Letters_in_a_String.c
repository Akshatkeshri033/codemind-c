#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50];
    scanf("%[^
]s",ch);
    int c=0;
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]>='a' && ch[i]<='z') c++;
    }
    printf("%d",c);
}