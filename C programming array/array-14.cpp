#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[105], mini=100001, sec_mini=100001, mini1=100001;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
    if(arr[i]<mini){
            mini1=mini;
        mini=arr[i];
        sec_mini=mini;
    }

    }

    printf("%d ", mini);
    if(mini==sec_mini){
        printf("%d ", mini1);
    }


}
