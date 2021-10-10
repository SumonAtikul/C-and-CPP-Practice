#include<stdio.h>
int main()
{
    int arr[105];
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    int max=arr[0];  ///arrayr 1st value k max dhore
    for(int i=0; i<5; i++){
        if(arr[i]>max){   ///jokhon present value 1st value mane max value theke
                            ///boro hoy tokhon max a store hoy
            max=arr[i];
        }
    }
    printf("%d\n", max);

}
