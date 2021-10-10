#include<stdio.h>
int main()
{
    int n, arr[105], min=100001, max=-1, count=0, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];

        }
        if(arr[i]<min){
            min=arr[i];

        }

    }
    for(int i=0; i<n; i++){
        if(arr[i]==min || arr[i]==max){
            continue;
        }
        else{
            count++;
            sum+=arr[i];
        }
    }
    printf("%0.2lf\n", (double)sum/count);

}
