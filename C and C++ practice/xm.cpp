#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int bin1, bin2;
    int i=0, rem=0, sum[105];
    scanf("%lld", &bin1);
    scanf("%lld", &bin2);
    while(bin1 != 0 || bin2 != 0)
    {
        sum[i++] = (bin1 % 10 + bin2 %10 + rem)%2;
        rem = (bin1%10+bin2%10+rem)/2;
        bin1=bin1/10;
        bin2=bin2/10;
    }
    if(rem != 0)
    {
        sum[i++]=rem;
        --i;
    }
    while(i>=0)
        cout << sum[i--];
}
