#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    for(int i=0; i<a; i++){
        cin >> b;
        int cnt=0;
        for(int i=1; i<=b; i++){
        if(i%2==1)
        {
            cnt++;

        }
    }

    printf("%d\n", cnt);
    }
}
