#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int bin1, bin2;
    int max, min, carry=0, sum=0, mid, i=0, po=0, temp1, temp2;
    cin >> bin1;
    cin >> bin2;
    if(bin1>bin2)
    {
        max=bin1;
        min=bin2;
    }
    else{
        max=bin2;
        min=bin2;
    }
    while(max>0){
        temp1=max%10;
        max=max/10;

        temp2=min%10;
        min=min/10;

        mid=(temp1 + temp2 + carry)%2;

        sum=po*mid+sum;
        po=po*10;
        if(max==0 && carry>0){
            sum=po*carry+sum;
        }
    }
    cout << sum;
}
