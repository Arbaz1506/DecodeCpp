// shortest path
#include <iostream>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <queue>
using namespace std;
int v;
vector<list<int>> graph;
vector<vector<int>> result;
unordered_set<int> visited;

void bfs(int src, int dest, vector<int> &dist)
{
    queue<int> qu;
    visited.clear();
    dist.resize(v, INT_MAX);
    dist[src] = 0;
    visited.insert(src);
    qu.push(src);
    while (!qu.empty())

    {
        int curr = qu.front();
        qu.pop();
        for (auto neighbour : graph[curr])
        {
            if (not visited.count(neighbour))
            {
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
}
void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

int main()
{

    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edge(s, d);
    }
    int x, y;
    // cout << endl;
    cout << "Enter path: ";
    cin >> x >> y;
    vector<int> dist;
    bfs(x, y, dist);
    for (int i = 0; i < dist.size(); i++)
    {
        cout << dist[i] << " ";
    }
}
