#include<stdio.h>
int main()
{
    int n, arr1[105], arr2[105];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++){
        arr2[i]=arr1[i];
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }
    getch();


}
