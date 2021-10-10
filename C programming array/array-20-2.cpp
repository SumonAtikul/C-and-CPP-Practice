#include<stdio.h>
int main()
{
    int s, n, a, b, sum;
    scanf("%d %d", &s, &n);
    for(int i=1; i<=n; i++){
        scanf("%d %d", &a, &b);

        if(a<s){
            s+=b;
            sum++;
        }
    else{
            printf("NO\n");
            break;

        }
        if(sum==n){

            printf("Yes\n");

        }
}

}

