#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    char bh[20];
    scanf("%s",ch);
     scanf("%s",bh);
    int c=strcmp(ch,bh);
    if(c==0) printf("Strings are Equal");
    else printf("Strings are not Equal");
    
}