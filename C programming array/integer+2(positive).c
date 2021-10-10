#include<stdio.h>
int main()
{
    int n, value[105];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &value[i]);
    }
    for(int i=0; i<n; i++){
        if(value[i]<0){
            printf("%d ", value[i]);
        }
        else{
            printf("%d ", value[i]+2);
        }
    }
    getch();

}
