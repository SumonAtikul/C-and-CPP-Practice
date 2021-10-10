#include<stdio.h>
int main()
{
    int n, arr[105];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        //printf("%d\n", arr[i]);
    }
    for(int i=0; i<n; i++){
    if(arr[i]>0){
        arr[i]+=2;
        printf("%d ", arr[i]);
    }
    else{
        printf("%d ", arr[i]);
    }
    }
    return 0;
}
