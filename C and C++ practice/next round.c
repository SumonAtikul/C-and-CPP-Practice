#include<stdio.h>
int main()
{
    int n, a, arr[105], count=0;
    scanf("%d %d", &n, &a);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if((arr[i]>arr[a-1]) || (arr[i]>i)){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
