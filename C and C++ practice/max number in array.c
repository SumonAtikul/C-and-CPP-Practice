#include<stdio.h>
int main()
{
    int arr[105];
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    int ma=arr[0];
    for(int i=0; i<5; i++){
        if(arr[i] > arr[0]){
            ma = arr[i];
        }
    }
    printf("%d\n", ma);
    getch();


}
