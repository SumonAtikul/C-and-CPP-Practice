#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    string st, st2="";
    cin >> st;
    for(int i=0; i<st.size(); i++){
            st[i]=tolower(st[i]);
    if(st[i] != 'a' && st[i] != 'e' && st[i] != 'i' && st[i] != 'o' && st[i] != 'u' && st[i] != 'y'){
            st2 += ".";
        st2 += st[i];
    }


    }
    cout << st2 << endl;
    return 0;


}
