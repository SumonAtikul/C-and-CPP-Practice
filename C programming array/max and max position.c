#include<stdio.h>
int main()
{
    int arr[105];
    for(int i=0; i<5; i++){
            scanf("%d", &arr[i]);
    }
    int max=arr[0], pos=0;
    for(int i=0; i<5; i++){
        if(arr[i]>max){
            max=arr[i];
            pos=i;
        }
    }
    printf("%d\n%d\n", max, pos);

}
