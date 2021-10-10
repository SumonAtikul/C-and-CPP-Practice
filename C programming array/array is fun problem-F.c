#include<stdio.h>
int main()
{
    int n, arr[105];
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", arr[n]);
    for(int i=1; i<=n-1; i++){
        printf(" %d", arr[i]);
    }
    return 0;
}
