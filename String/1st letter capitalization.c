#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    while(gets(ch)){
        if(ch[0]>='a' && ch[0]<='z'){
            ch[0]-=32;
        }
        puts(ch);
    }
    return 0;

}

