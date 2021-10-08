#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,   i, count=0;
    ///string a, store;
    cin>>n;
    int a[105];
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
        {
            ///cnt++;
            ///store=a[i];
            v.push_back(a[i]);
        }
    }
    for(int i=0; i<v.size(); i++){
    if(v[i]%3==0 || v[i]%5==0)
    count++;
    }
    if(count==v.size())
        printf("APPROVED\n");
    else
        printf("DENIED\n");
}
