#include<stdio.h>
int main()
{
    int n;
    double arr[105];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%lf", &arr[i]);
    }
    double min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%0.2lf\n", min*2);
    return 0;
}
