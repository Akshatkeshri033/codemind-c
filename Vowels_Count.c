#include<stdio.h>
#include<stdio.h>
int main()
{
    char ch[30];
    scanf("%[^
]s",ch);
    int c=0;
    for(int i=0;ch[i];i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U') c++;
    }
    printf("%d",c);
}