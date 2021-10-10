#include<stdio.h>
int main()
{
    int arr[5]={12,34,23,56,78};
    int arr2[5]={65,73,45,21,45};
    int arr3[10];
    for(int i=0; i<5; i++){
        arr3[i]=arr[i];
    }
    for(int i=5; i<10; i++){
        arr3[i]=arr2[i-5];
    }
    for(int i=0; i<10; i++){
    printf("%d ", arr3[i]);
    }
}
