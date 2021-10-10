#include<stdio.h>
int main()
{
    int n, arr[105], best, worst, count=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    best=worst=arr[1];
    for(int i=1; i<=n; i++){
        if(best>arr[i]){
            best=arr[i];
            count++;
        }
        if(worst<arr[i]){
                worst=arr[i];
        count++;

        }
    }
    printf("%d\n", count);
    return 0;
}
