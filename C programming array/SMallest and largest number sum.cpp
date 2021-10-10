#include<iostream>
#include<stdio.h>
#include<algorithm> ///sort function
using namespace std;
int main()
{
    int n, arr[105];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n);
    printf("%d\n", arr[0]+arr[n-1]);
    return 0;
}

