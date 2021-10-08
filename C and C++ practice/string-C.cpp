#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[105], st[105];
    scanf("%s", ch);
    int j=0;
    for(int i=0; i<strlen(ch); i++){
        if(ch[i]!='+'){
            st[j]=ch[i];
            j++;
        }
    }
    sort(st.begin(), st.end());
    printf("%s", st);
}
