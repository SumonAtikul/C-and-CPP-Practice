#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n < 10)
        {
            cout << n << endl;
        }
        else
        {
            int ordinary = 0;
            for (int i = 1; i <= n; i++)
            {
                string str = to_string(i);
                int len = str.size();
                if (len == 1)
                {
                    ordinary++;
                }
                else
                {
                        set<int> s;
                    for (int i = 0; i < len; i++)
                    {
                        s.insert(str[i]);
                    }
                    if (s.size() == 1) ordinary++;
                    s.clear();
                }
            }
            cout << ordinary << endl;
        }
    }
}
