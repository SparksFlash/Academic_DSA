#include <bits/stdc++.h>
using namespace std;
#define V 6

void initAdjMatrix(int AdjMatrix[V][V])
{
    for (int ii = 0; ii < V; ii++)
    {
        for (int jj = 0; jj < V; jj++)
        {
            AdjMatrix[ii][jj] = 0;
        }
    }
}

void addEdge(int AdjMatrix[V][V], int u, int v)
{
    AdjMatrix[u - 1][v - 1] = 1;
    AdjMatrix[v - 1][u - 1] = 1;
}

void printAdjMatrix(int AdjMatrix[V][V])
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << AdjMatrix[i][j] << " ";
        }
        cout << '\n';
    }
}

int32_t main()
{

    int M, N;
    cin >> M >> N;
    int adjMatrix[V][V];
    initAdjMatrix(adjMatrix);
    for (int i = 0; i < N; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(adjMatrix, u, v);
    }

    printAdjMatrix(adjMatrix);
}