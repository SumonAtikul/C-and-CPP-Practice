#include<stdio.h>
int main()
{
    int t, n, m, arr[105];
    char ch, brr[105];
    scanf("%d", &t);
    for(int i=2; i>0; i--){
        scanf("%d %d", &n, &m);
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
            for(int i=0; i<m; i++){
                    scanf("%c", &ch);
                if(ch=='P'){
                        int a, b, temp;
                    scanf("%d %d", &a, &b);
                temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
                }

                else if(ch=='S'){
                    int c;
                    scanf("%d", &c);
                    for(int i=0; i<n; i++){
                        arr[i]+=c;
                    }
                }
                else if(ch=='R'){
                    int i1=n-1;
                    for(int g=0; g<n/2; g++){
                        int temp=arr[g];
                        arr[g]=arr[i1];
                        arr[i1]=temp;
                        i1--;
                    }
                }
                else if(ch=='M'){
                    int d;
                    scanf("%d", &d);
                    for(int i=0; i<n; i++){
                        arr[i]*=d;
                    }
                }
                else if(ch=='D'){
                    int e;
                    scanf("%d", &e);
                    for(int i=0; i<n; i++){
                        arr[i]/=e;
                    }
                }
            }
    }
    printf("case: \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}
