// Any Path
#include <iostream>
#include <vector>
#include <unordered_set>
#include <list>
using namespace std;
int v;
vector<list<int>> graph;
vector<vector<int>> result;
unordered_set<int> visited;

void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

void dfs(int curr, int end, vector<int> &path)
{
    if (curr == end)
    {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);
    path.push_back(curr);
    for (auto neighbour : graph[curr])
    {
        if (not visited.count(neighbour))
        {
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
}

void all_path(int src, int dest)
{
    vector<int> v;
    dfs(src, dest, v);
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
    all_path(x, y);
    for (auto path : result)
    {
        for (auto el : path)
        {
            cout << el<<" -> ";
        }
        cout << endl;
    }
}
