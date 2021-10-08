#include<bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    scanf("%d", &T);

    for (int i=0; i<T; i++)
    {
        int M, N, P;
        scanf("%d %d %d", &M, &N, &P);

        vector<int> adjList[M];
        map<string, int> house;
        for (int j=0; j<M; j++)
        {
            string k;
            cin >> k;

            house[k] = j;
        }

        for (int j=0; j<N; j++)
        {
            string A, B;
            cin >> A >> B;

            adjList[house[A]].push_back(house[B]);
            adjList[house[B]].push_back(house[A]);
        }

        for (int j=0; j<P; j++)
        {
            int V;
            string s, e;
            cin >> V >> s >> e;

            int S = house[s];
            int E = house[e];

            int dist[M];
            memset(dist, -1, sizeof(dist));

            queue<int> q;
            q.push(S);

            dist[S] = 0;

            bool found = false;
            while (!q.empty() && !found)
            {
                int x = q.front();
                q.pop();
                for (vector<int>::iterator it = adjList[x].begin(); it != adjList[x].end(); it++)
                {
                    if (dist[*it] != -1) continue;
                    else if (*it == E)
                    {
                        dist[*it] = dist[x] + 1;
                        found = true;
                        break;
                    }
                    else
                    {
                        dist[*it] = dist[x] + 1;
                        q.push(*it);
                    }
                }
            }

            if (dist[E] == -1)
            {
                cout << "NO SHIPMENT POSSIBLE" << endl;
            }
            else
            {
                cout << "$" << V*dist[E]*100 << endl;
            }
        }
    }

    return 0;
}
