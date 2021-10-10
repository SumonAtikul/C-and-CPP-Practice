#include<stdio.h>
int main()
{
    int n, a, b, arr[105], count=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &a, &b);
    for(int i=0; i<n; i++){
        if(arr[i]>=a && arr[i]<=b){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
