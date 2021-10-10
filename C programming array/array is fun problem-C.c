#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double arr[105],max;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%lf", &arr[i]);
    }
    max=abs(arr[0]);
    for(int i=0; i<n; i++){
        if(abs(arr[i])>max){
            max=abs(arr[i]);
        }

    }
    printf("%0.2lf\n", max);
    return 0;
}
