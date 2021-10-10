#include<stdio.h>
int main()
{
    int n,arr[105];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max=-1, second_max=-1;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            second_max=max;  ///1st a 2nd max=-1 hoye jay
            max=arr[i];
            }
            else if(arr[i]>second_max){
                second_max=arr[i];
            }
    }
    printf("maximum = %d\n", max);
    if(second_max == -1 || second_max == max){
        printf("second maximum value not found\n");
    }
    else{
        printf("second maximum = %d", second_max);
    }
    getch();

}
