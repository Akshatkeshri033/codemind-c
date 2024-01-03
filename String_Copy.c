#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    scanf("%[^
]s",ch);
    char bh[20];
    printf("%s",strcpy(bh,ch));
}