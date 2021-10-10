#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, arr[105], brr[105];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n);
    for(int i=0; i<n; i++){
       if(arr[i]==arr[i+1]){
        continue;
       }
       printf("%d ", arr[i]);
    }
}
