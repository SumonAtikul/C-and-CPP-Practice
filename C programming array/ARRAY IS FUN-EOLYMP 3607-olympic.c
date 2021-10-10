#include<stdio.h>
int main()
{
    #ifdef olympic
    freopen("in.txt", "r", stdin);
    #endif
    int n, height[20005], a, b;
    while(scanf("%d", &n)==1){
        for(int i=0; i<n; i++){
            scanf("%d", &height[i]);
        }
        scanf("%d %d", &a, &b);
        int count=0;
        for(int i=0; i<n; i++){
            if(height[i]>=a && height[i]<=b){
                count++;
            }
        }
        printf("%d\n", count);
    }
    getch();
}
