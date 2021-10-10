#include<stdio.h>
int main()
{
    int n, arr[105];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int min=100001, second_min=100001;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            second_min=min;
            min=arr[i];
        }
        else if(arr[i]<second_min){
            second_min=arr[i];
        }
    }
    printf("minimum = %d\n", min);
    if(min == 100001 || second_min == min){
        printf("second minimum value not found\n");
    }
    else{
        printf("second_minimum = %d\n", second_min);
    }
    getch();
}
