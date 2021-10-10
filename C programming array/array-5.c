#include<stdio.h>
int main()
{
    int n, count=0;
    double arr[105], sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%lf", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]>0 && (i+1)%3==0){
            count++;
            sum+=arr[i];
        }
    }
    printf("%d %0.2lf\n", count, sum);
}
