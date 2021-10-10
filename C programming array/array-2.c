#include<stdio.h>
int main()
{
    int n, b,c;
    double arr[105];
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%lf", &arr[i]);
    }
    int index=0;
    for(int i=1; i<=n; i++){
        if(arr[i]<=2.5){
                index=1;
          printf("%d %lf\n", i, arr[i]);
        break;

        }

    }
    if(index==0){
        printf("not found\n");
    }



}
