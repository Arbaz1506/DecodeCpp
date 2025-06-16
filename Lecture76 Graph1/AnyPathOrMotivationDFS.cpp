// Any Path
#include <iostream>
#include <vector>
#include <unordered_set>
#include <list>
using namespace std;
int v;
vector<list<int>> graph;
unordered_set<int> visited;

void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

bool dfs(int curr, int end)
{
    if (curr == end)
        return true;
    visited.insert(curr);
    for (auto neighbour : graph[curr])
    {
        if (not visited.count(neighbour))
        {
            bool result = dfs(neighbour, end);
            if (result)
                return true;
        }
    }
    return false;
}

bool any_path(int src, int dest)
{
    return dfs(src, dest);
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
    cout << any_path(x, y) << endl;
}
