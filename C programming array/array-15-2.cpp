#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k, min, max, a[100];
    cin >> n >> j;
    float sum=0, count=0, a2[100];
    for(i=0; i<j; i++){
        for(k=0; k<n; k++){
            cin >> a[k];
        }
        sort(a, a+n);
        for(k=0; k<n; k++){
            if(a[k]==a[n-1] || a[k]==a[0]){
                continue;
            }
            else{
                sum+=a[k];
                count++;

            }
        }
        a2[i]=sum/count;
        sum=count=0;
    }
    for(i=0; i<j; i++){
        printf("%0.2f ", a2[i]);
    }
    return 0;
}
