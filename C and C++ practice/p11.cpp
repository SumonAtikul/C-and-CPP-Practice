#include<bits/stdc++.h>
using namespace std;

const int maxn = 100009;
const int INF = 100009;
typedef pair<int,int> pii;
priority_queue<pii,vector<pii>,greater<pii> >q;
vector<pii> g[maxn];
void Dijkstra(int src);
int d[maxn];

int main(){
	int N,n,m,s,t;
	scanf("%d",&N);
	for(int i = 1; i <= N; i++){
		scanf("%d%d%d%d",&n,&m,&s,&t);
		int u,v,w;
		for(int j = 0; j < maxn; j++)
			g[j].clear();

		for(int j = 1; j <= m; j++){//Build graph
			scanf("%d%d%d",&u,&v,&w);
			g[u].push_back(make_pair(w,v));
			g[v].push_back(make_pair(w,u));
		}
		Dijkstra(s);
		printf("Case #%d: ",i);
		if(d[t] < INF)
			printf("%d\n",d[t]);
		else
			puts("unreachable");
	}

}
void Dijkstra(int src){
	while(!q.empty())q.pop();
	for(int i = 0; i < maxn; i++)
		d[i] = INF;
	d[src] = 0;
	q.push(make_pair(d[src],src));
	while(!q.empty()){
		pii x = q.top();q.pop();
		int u = x.second;
		if(x.first != d[u]) continue;
		for(int j = 0; j < g[u].size(); j++){
			int v = g[u][j].second;
			int w = g[u][j].first;
			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				q.push(make_pair(d[v],v));
			}
		}
	}
}

