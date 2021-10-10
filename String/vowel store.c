#include<stdio.h>
#include<string.h>
int main()
{
    char ch[105], st[105];
    int j=0;
    gets(ch);
    ///scanf("%s", &ch);
    int len=strlen(ch);
    for(int i=0; i<len; i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
            st[j]=ch[i];
            j++;
        }
    }
    st[j]='\0';
    ///puts(st);
    printf("%s\n", st);
    return 0;
}
