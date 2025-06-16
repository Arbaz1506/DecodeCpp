#include <iostream>
#include <vector>
using namespace std;

int find(vector<int> &parent, int x)
{
    // This method defines which group or cluster X belongs to
    return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}
void Union(vector<int> &parent, vector<int> &sz, vector<int> &mini, vector<int> &maxi, vector<int> &rank, int a, int b)
{
    a = find(parent, a);
    b = find(parent, b);

    if (a == b)
        return;
    if (rank[a] > rank[b])
    {
        rank[a]++;
        parent[b] = a;
        sz[a] += sz[b];
        mini[a] = min(mini[a], mini[b]);
        maxi[a] = max(maxi[a], maxi[b]);
    }
    else
    {
        rank[b]++;
        parent[a] = b;
        sz[b] += sz[a];
        mini[b] = min(mini[b], mini[a]);
        maxi[b] = max(maxi[b], maxi[a]);
    }
}

int main()
{

    int n;
    int m;
    cin >> n >> m;
    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 0);
    vector<int> sz(n + 1, 1);
    vector<int> mini(n + 1);
    vector<int> maxi(n + 1);

    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        mini[i] = i; // Initialize mini and maxi to the element itself
        maxi[i] = i;
    }

    while (m--)
    {
        string str;
        cin >> str;
        if (str == "union" || str == "Union" || str == "UNION")
        {
            int x, y;
            cin >> x >> y;
            Union(parent, sz, mini, maxi, rank, x, y);
        }

        else
        {
            int x;
            cin >> x;
            x = find(parent, x);
            cout << mini[x] << " " << maxi[x] << " " << sz[x] << endl;
        }
    }
}