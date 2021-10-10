#include<stdio.h>
int main()
{
    int arr[10]={2,3,4,2,5,3,6,10,3,5};
    int count[11]={0};///highest number theke 1 beshi nite hoy
    for(int i=0; i<10; i++){
        count[arr[i]]++;

    }
    for(int i=0; i<=10; i++){
            if(count[i]>0){///condition na dile 1-10 sob chole ashe

            printf("frequency of %d is %d\n", i, count[i]);
            }

    }
    getch();

}
