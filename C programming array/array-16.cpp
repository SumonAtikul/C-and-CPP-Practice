#include<stdio.h>
int main()
{
    int n, sum=0, a;
    double b;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %lf", &a, &b);
        if(b<50){
            sum+=a;
        }
    }
    printf("%d\n", sum);
    return 0;

}
