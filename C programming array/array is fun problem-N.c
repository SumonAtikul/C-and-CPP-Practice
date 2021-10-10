#include<stdio.h>
int main()
{
    int n, tc, arr[105];
    scanf("%d %d", &n, &tc);
    for(int i=1; i<=tc; i++){
        double sum=0, p=0, avg;
        for(int j=0; j<n; j++){
            scanf("%d", &arr[j]);
        }
        double max=arr[0];
        for(int j=0; j<n; j++){
            if(arr[j]>max){
                max=arr[j];
            }
        }
        double min=arr[0];
        for(int j=0; j<n; j++){
        if(arr[j]<min){
            min=arr[j];
        }
        }

    for(int j=0; j<n; j++){
        if(arr[j]==max || arr[j]==min){
            p++;
            continue;
        }
        avg=sum/(n-p);
        printf("%0.2lf ",avg);

    }
}
}
