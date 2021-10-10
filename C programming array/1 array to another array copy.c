#include<stdio.h>
int main(){
    int arr1[105], arr2[105]; ///size beshi nile valo hoy
    for(int i=0; i<10; i++){
        scanf("%d", &arr1[i]);   ///1 loop a korle program chuto hoy tai atai best
        arr2[i]=arr1[i];
        printf("%d ", arr2[i]);
    }
//    for(int i=0; i<10; i++){
//        arr2[i]=arr1[i];
//         printf("%d ", arr2[i]); [avabe korlew hobe]
//    }
//     for(int i=0; i<10; i++){
//         printf("%d ", arr2[i]); [avabe korlew hobe]
//    }
    getch();
}
