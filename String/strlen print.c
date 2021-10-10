#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    gets(ch);
    int len=strlen(ch);
    for(int i=0; i<len; i++){ ///length ar age porjonto print korbe
        printf("%c\n", ch[i]);
    }
    return 0;

}
