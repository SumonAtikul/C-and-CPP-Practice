#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TC;
    cin>>TC;
    while(TC--)
    {
        int n;
        cin >> n;
        if(n<10)
        {
            cout << n <<endl;
        }
        else{
            int ord=0;
            for(int i=1; i<=n; i++)
            {
                string str=to_string(i);
                int len = str.size();
                if(len==1)
                {
                    ord++;
                }
                else
                {
                    set<int>s;
                    for(int i=0; i<len; i++)
                    {
                        s.insert(str[i]);
                    }
                    if(s.size()==1)ord++;
                    s.clear();
                }
            }
            cout << ord <<endl;
        }
    }
}
