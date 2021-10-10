#include<stdio.h>
int main(){
    int arr[10],sum=0,count=0;
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
        if(arr[i]>=80){
            count++;
        }
    }
    printf("%d\n%d\n", sum, count);
    getch();

}
