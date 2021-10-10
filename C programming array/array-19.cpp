#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, n, arr[105], a, b;
    scanf("%d", &tc);
    for(int i=0; i<tc; i++){
        scanf("%d %d", &a, &b);
        for(int i=a; i<=b; i++){
            scanf("%d", &arr[i]);
        }
        for(int i=a; i<b; i++){
            if(arr[i-a]!=i){
                n=i;
            }
        }
        printf("%d\n", n);
    }
    return 0;

}
