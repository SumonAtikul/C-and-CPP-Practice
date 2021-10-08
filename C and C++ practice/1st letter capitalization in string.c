#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1005];
    scanf("%s", &ch);
    int len=strlen(ch);
    for(int i=0; i<len; i++){
        if(ch[0] >= 'a' && ch[0] <= 'z'){
            ch[0] -= 32;
        }
        printf("%c", ch[i]);
    }
    getch();

}
