#include<stdio.h>
#include<string.h>
int main()
{
    char ch[105], st[105], st2[105]="";
    scanf("%s %s", ch, st);
    strcat(st2, ch);
    strcat(st2, st);
    puts(st2);
    return 0;

}
