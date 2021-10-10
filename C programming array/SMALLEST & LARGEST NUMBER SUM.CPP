#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace s ///sort function
int main()
{
    int n, arr[105];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n);
    printf("%d\n", arr[o]+arr[n-1]);
    return 0;
}

