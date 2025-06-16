#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
#include <list> // this is doublely LinkedList

vector<list<int>> graph;
int v;

void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

void display()
{

    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << "-> ";

        for (auto el : graph[i])
        {
            cout << el << ", ";
        }
        cout << endl;
    }
}
void dfs(int node, unordered_set<int> &visited)
{
    visited.insert(node);
    for (auto neighbor : graph[node])
    {
        if (!visited.count(neighbor))
        {
            dfs(neighbor, visited);
        }
    }
}
int connectedComponent()
{
    int result = 0;
    unordered_set<int> visited;
    for (int i = 0; i < v; i++)
    {
        if (visited.count(i) == 0)
        {
            result++;
            dfs(i, visited);
        }
    }
    return result;
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
    cout << connectedComponent() << endl;
}
