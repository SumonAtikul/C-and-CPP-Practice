#include <stdio.h>
#include <string.h>
#include <utility>
#include <queue>
using namespace std;
#define INF 0x3f3f3f3f
const int MAXN = 20005;
const int MAXM = 100005;

typedef pair<int, int> pii;
priority_queue<pii, vector<pii>, greater<pii> >q;

int t, n, m, s, e;
int first[MAXN], a[MAXM], b[MAXM], v[MAXM], next[MAXM], vis[MAXN], d[MAXN];

void init() {
    memset(first, -1, sizeof(first));
    scanf("%d%d%d%d", &n, &m, &s, &e);
    for (int i = 0; i < m; i ++) {
	scanf("%d%d%d", &a[i], &b[i], &v[i]);
	a[i + m] = b[i], b[i + m] = a[i], v[i + m] = v[i];
	next[i] = first[a[i]];
	first[a[i]] = i;
	next[i + m] = first[a[i + m]];
	first[a[i + m]] = i + m;
    }
}

int dijkstra(int s) {
    memset(d, INF, sizeof(d));
    memset(vis, 0, sizeof(vis));
    d[s] = 0;
    q.push(make_pair(d[s], s));
    while (!q.empty()) {
	pii u = q.top(); q.pop();
	int x = u.second;
	if (vis[x]) continue;
	vis[x] = 1;
	for (int i = first[x]; i != -1; i = next[i])
	    if (d[b[i]] > d[x] + v[i]) {
		d[b[i]] = d[x] + v[i];
		q.push(make_pair(d[b[i]], b[i]));
	    }
    }
    return d[e];
}

void solve() {
    init();
    int ans = dijkstra(s);
    if (ans == INF)
	printf("unreachable\n");
    else
	printf("%d\n", ans);
}

int main() {
    int cas = 0;
    scanf("%d", &t);
    while (t --) {
	printf("Case #%d: ", ++ cas);
	solve();
    }
    return 0;
}
