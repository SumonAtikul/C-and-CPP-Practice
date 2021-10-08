#include<bits/stdc++.h>
#define N 2001
#define MAX 100000000
using namespace std;

int a[N], b[N], t[N];
bool BellmanFord(int n, int m);
int main()
{
    int TC, n, m;
    scanf("%d", &TC);
    while (TC--)
    {
        int i;
        cin >> n >> m;
        for (i = 0; i < m; i++)
            scanf("%d%d%d", &a[i], &b[i], &t[i]);
        puts(BellmanFord(n, m) ? "possible" : "not possible");
    }

    return 0;
}
bool BellmanFord(int n, int m)
{
    int d[N];
    d[0] = 0;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < m; j++)
            if (d[a[j]] != MAX)
                if (d[a[j]] + t[j] < d[b[j]])
                    d[b[j]] = d[a[j]] + t[j];

    for (int j = 0; j < m; j++)
        if (d[a[j]] + t[j] < d[b[j]])
            return true;
    return false;
}
