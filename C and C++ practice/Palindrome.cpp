#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    string st, st2;
    cin >> st;
     for(int i=0; i<st.size(); i++){
        if(st[i]>='A' && st[i]<='Z'){
        st[i] += 32;
        }
    }
    st2=st;
    reverse(st2.begin(), st2.end());
    /*for(int i=0; i<st.size(); i++){
        if(st2[i]>='A' && st2[i]<='Z')
        st[i] += 32;
    }*/
    if(st == st2){
        puts("palindrome");
    }
    else{
        puts("not");
    }

}
