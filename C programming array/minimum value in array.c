#include<stdio.h>
int main()
{
    int arr[105];
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    int min=arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d\n", min);
}
