#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y, l, r, count=0;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> x >> y >> l >> r;
        int arr[105];
        cin >> arr[i];
        if(arr[3]%arr[1]==0 && arr[3]%arr[2]==0)
        {
            ///printf("%d\n", arr[3]);
            ///count++;
            cout << arr[3];
        }
        if(arr[4]%arr[1]==0 && arr[4]%arr[2]==0)
        {
            ///count++;
            ///printf("%d\n", arr[4]);
            cout << arr[4];
        }
        /*if(y%x==0 && y%y==0)
        {
            count++;
        }
        if(r%x==0 && r%y==0)
        {
            ///printf("%d\n", r);
            count++;
        }*/
        ///else
        ///printf("%d\n", arr[3]+arr[4]);
    }
    ///printf("%d\n", count);
}
