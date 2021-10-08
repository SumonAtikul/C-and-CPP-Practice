#include<stdio.h>
int main()
{
    int arr[10];
    int count[21]={0};
    for(int i=0; i<10; i++){
            scanf("%d", &arr[i]);
            count[arr[i]]++;   ///EK LOOP EI KAJ HOYE JAY

    }
    ///for(int i=0; i<10; i++){
           /// count[arr[i]]++;
   /// }
    for(int i=0; i<=20; i++){
        if(count[i]>0){
            printf("Frequency of %d is %d\n", i, count[i]);
        }
    }
    getch();

}
