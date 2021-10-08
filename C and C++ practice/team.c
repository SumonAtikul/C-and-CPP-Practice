#include<stdio.h>
int main()
{
    int tc, a, b, c, count=0;
    scanf("%d", &tc);
    for(int i=0; i<tc; i++){
        scanf("%d %d %d", &a, &b, &c);

    if((a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1) || (a==1&&b==1&&c==1)){
        count++;
    }
    }

    printf("%d\n", count);
    return 0;

}
