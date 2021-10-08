#include <bits/stdc++.h>
using namespace std;

#define INF 10005
int dist[1005][1005];

void floydWarshall(int n)
{
    for (int k = 0; k < n; ++k)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (dist[i][j] > (dist[i][k] + dist[k][j]) && (dist[k][j] != INF && dist[i][k] != INF))
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
}
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int k = 1; k <= tc; k++)
    {
        int n, R;
        scanf("%d %d", &n, &R);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i == j) dist[i][j] = 0;
                else dist[i][j] = INF;
            }
        }
        for (int i = 1; i <= R; ++i)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            dist[u][v] = 1;
            dist[v][u] = 1;
        }
        floydWarshall(n);
        int s, d;
        scanf("%d %d", &s, &d);
        int res = INT_MIN;
        for (int j = 0 ; j < n ; j++)
        {
            res = max(res, dist[s][j] + dist[j][d]);
        }
        printf("Case %d: %d\n", k, res);
    }
    return 0;
}
