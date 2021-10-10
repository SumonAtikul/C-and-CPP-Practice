#include<stdio.h>
int main()
{

    int n;
    double arr[105];
    scanf("%d", &n);
        for(int i=0; i<n; i++){
            scanf("%lf", &arr[i]);
        }

        int index=0;
        for(int i=0; i<n; i++){
            if(arr[i]<=2.5){
                index=1; ///true
                printf("%d %0.2lf\n", i+1, arr[i]);
                break;
            }

        }
        if(index==0){
            printf("Not Found\n");
        }

    return 0;


}
