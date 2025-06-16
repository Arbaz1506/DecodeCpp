#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;
void add_edge(int a, int b, bool bi_dir = true)
{
    graph[a].push_back(b);

    if (bi_dir)
    {
        graph[b].push_back(a);
    }
}

void topo_bfs()
{
    vector<int> deg(v, 0);

    for (int i = 0; i < v; i++)
    {
        for (auto neighbour : graph[i])
        {
            deg[neighbour]++;
        }
    }
    queue<int> qu;
    unordered_set<int> visited;

    for (int i = 0; i < v; i++)
    {
        if (deg[i] == 0)
        {
            qu.push(i);
            visited.insert(i);
        }
    }

    while (not qu.empty())
    {
        int node = qu.front();
        cout << node << " ";
        qu.pop();
        for (auto neighbour : graph[node])
        {
            if (not visited.count(neighbour))
            {
                deg[neighbour]--;
                if (deg[neighbour] == 0)
                {
                    qu.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
    }
}

int main()
{
    cin >> v;
    int e;
    cin >> e;
    graph.resize(v, list<int>());
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        add_edge(x, y, false);
    }
    topo_bfs();
    return 0;
}