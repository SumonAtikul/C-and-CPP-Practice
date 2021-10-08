#include<bits/stdc++.h>
using namespace std;
void digits(long n, int base)
{
    int digit = (int)(floor( log(n)/log(base)) + 1);
    cout << digit << endl;
}
int main()
{

    long long int n, k;
    cin >> n >> k;
    digits(n, k);
    return 0;
}

