#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    gets(ch);
    int len=strlen(ch); ///koyta character ache seta ber korbe
    printf("%d\n", len);
    return 0;

}
