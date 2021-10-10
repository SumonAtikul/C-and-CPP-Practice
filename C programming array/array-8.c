#include<stdio.h>
int main()
{
    int n, arr[105];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max=0, min=100000;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];

        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d\n", min+max);
}
