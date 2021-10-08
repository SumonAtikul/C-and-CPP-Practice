#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count=1;
    for(int i=0; i<s.size(); i++)
    {
        if (s[i]==s[i+1])
        {
            count++;
        }
    }
    if(count==3)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;
}
