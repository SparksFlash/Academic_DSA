#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int32_t main()
{
    int n, m;
    cin >> n >> m;
    vector<int> dist(n + 1, INF);
    vector<vector<pair<int, int>>> graph(n + 1);
    for (int ii = 0; ii < m; ii++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w}); // Only if Directed Graph
        graph[v].push_back({u, w});
    }
    int src;
    cin >> src;
    dist[src] = 0;
    set<pair<int, int>> s;
    if (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        for (auto kk : graph[x.second])
        {
            if (dist[kk.first] > dist[x.second] + kk.second)
            {
                s.erase({dist[kk.first], kk.first});
                dist[kk.first] = dist[x.second] + kk.second;
                s.insert({dist[kk.first], kk.first});
            }
        }
    }
    for (int ii = 1; ii < n; ii++)
    {
        if (dist[ii] < INF)
            cout << dist[ii] << ' ';
        else
            cout << -1 << '\n';
    }
}