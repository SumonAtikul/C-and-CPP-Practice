#include<stdio.h>
int main()
{
    char ch[100];
    gets(ch);
    int len = strlen(ch);
    for(int i=0; i<len; i++){
        if(ch[i]>='a' && ch[i]<='z'){
                ch[i] -= 32;
        }
        else if(ch[i]>='A' && ch[i]<='Z'){
            ch[i] += 32;
        }
        printf("%c", ch[i]);

    }
      ///puts(ch);///(EKHANE PUTS LIKHEW KORA JAY)

    getch();

}
