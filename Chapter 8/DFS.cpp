#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> graph[N];
bool vis[N];

void DFS(int vertex)
{
    vis[vertex] = true;
    cout << vertex << ' ';
    for (int child : graph[vertex])
    {
        if (!vis[child])
            DFS(child);
    }
}

int32_t main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    DFS(0);
}
