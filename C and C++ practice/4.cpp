#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, c, t;
    cin >> t;
    for(i=0; i<t; i++)
    {
        int n;
        cin >> n;
        c=0;
        for(j=1; j<=9; j++)
        {
            for(k=0; k<=n;)
            {
                c++;
                k=(k*10)+j;
            }
        }
        cout << c << endl;
    }
}
