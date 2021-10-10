#include<stdio.h>
int main(){
    int arr[10]={67, 54, 81, 43, 89, 78, 85, 80, 45, 96};
    int count=0;
    for(int i=0; i<10; i++){
        if(arr[i]>=80){  ///80 theke boro hole count hobe
            count++;
        }
    }
    printf("%d\n", count);
    getch();

}
