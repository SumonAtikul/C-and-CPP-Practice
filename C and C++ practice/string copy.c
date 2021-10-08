#include<stdio.h>
#include<string.h>
int main()
{
    char ch[105], st[105];
    gets(ch);
    int len=strlen(ch);
    int j=0;
    for(int i=0; i<len; i++){
        st[j]=ch[i];
        j++;
    }
    st[j]='\0';
    puts(st);
}
