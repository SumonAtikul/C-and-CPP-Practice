#include<stdio.h>
#include<string.h>
int main()
{
    char ch[105], st[105];
    scanf("%s %s", ch, st);
    strcat(ch,st);
    puts(ch);
    return 0;
}
