#include<stdio.h>
#include<string.h>
int main()
{
    char ch[105], st[105];
    gets(ch);
    int len=strlen(ch);
    for(int i=0; i<len; i++){
        st[i]=ch[i];
    }
    puts(st);


    return 0;

}
