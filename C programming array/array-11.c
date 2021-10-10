#include<stdio.h>
int main()
{
    int n, arr[105], brr[105];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            brr[j]=arr[i];
            j++;
        }
    }
    for(int i=0; i<n; i++){
            if(i<j){
        printf("%d ", brr[i]);
            }
            else{
                printf("0 ");
            }
    }

}
