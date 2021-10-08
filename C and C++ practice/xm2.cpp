#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[105];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

    }
    int p=arr[n-1];
    int q=arr[n-2];
    sort(arr, arr+n);
    printf("%d\n", p*q);
    return 0;

}
