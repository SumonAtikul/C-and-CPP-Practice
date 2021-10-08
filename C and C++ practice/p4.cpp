#include <bits/stdc++.h>
using namespace std;

#define INF 10000
int d[105][105];

void floydWarshall(int N)
{
	for (int k = 0; k < N; ++k)
	{
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				if (d[i][j] > (d[i][k] + d[k][j]) && (d[k][j] != INF && d[i][k] != INF))
					d[i][j] = d[i][k] + d[k][j];
			}
		}
	}
}
int main()
{
	int t; cin >> t;
	for (int k = 1; k <= t; k++)
	{
		int N, R;
		cin >> N >> R;
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				if (i == j) d[i][j] = 0;
				else d[i][j] = INF;
			}
		}
		for (int i = 1; i <= R; ++i)
		{
			int u, v;
			cin >> u >> v;
			d[u][v] = 1;
			d[v][u] = 1;
		}
		floydWarshall(N);
		int s, d;
		cin >> s >> d;
		int result = INT_MIN;
		for (int j = 0 ; j < N ; j++)
		{
			result = max(result, d[s][j] + d[j][d]);
		}
		cout << "Case " << k << ": " << result << endl;
	}
	return 0;
}
