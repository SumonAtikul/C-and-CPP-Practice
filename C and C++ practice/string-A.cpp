#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    scanf("%s", &ch);
    int len=strlen(ch);
    if(len<10){
        printf("%s", ch);
    }
    else{
       printf("%c %d %c", ch[0], len-2, ch[len-1]);
    }
    return 0;
}
