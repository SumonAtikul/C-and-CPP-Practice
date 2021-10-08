#include<stdio.h>
int main()
{
    int n,k,count=0;
    scanf("%d%d",&n,&k);
    int num[n];
    for(int i=0; i<n; i++)
        scanf("%d",&num[i]);
    if(num[k-1]==0)
    {
        for(int i=0; i<n; i++)
        {
            if(num[i]>num[k-1])
                count++;
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(num[i]>=num[k-1])
                count++;
        }
    }
    printf("%d\n",count);
    return 0;
}


