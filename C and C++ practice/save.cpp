#include <bits/stdc++.h>
using namespace std;
int main() {
    ///string s;
    char c;
    cin>>c;
    int count = 0;
    for (int i=0; i<c.length(); i++) {
        if (c >= 'A' && c<= 'Z')
            count++;
    }
    cout<<count<<endl;
}

