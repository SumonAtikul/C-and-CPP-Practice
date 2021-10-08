#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int i=0;
    while(i<str1.size())
    {
        if(str1[i]=='0' && str2[i]=='0')
            cout << 0;

        else if(str1[i]=='0' && str2[i] == '1')
            cout<< 1;

         else if(str1[i]=='1' && str2[i] == '0')
            cout<<1;

         else if(str1[i]=='1' && str2[i] == '1')
            cout<<0;
         i++;
    }
}
