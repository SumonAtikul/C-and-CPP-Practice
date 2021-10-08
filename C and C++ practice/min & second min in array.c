#include<stdio.h>
int main()
{
    int n, arr[5];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int min = 10001, second_min = 10001;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            second_min=min;
            min=arr[i];
        }
        else if (arr[i]<second_min){
            second_min=arr[i];


        }
    }
    printf("Minimum = %d\n",min);
    if(second_min==100001){
        printf("second minimum value not found\n");
    }
    else{
        printf("second minimum = %d\n", second_min);
    }
    getch();


}
