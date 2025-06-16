#include <iostream>
#include <vector>
#include<cstring>
#include <climits>
#define ll long long int
using namespace std;
// question from spoj fully correct but run ni hora
vector<vector<int>> dp;

ll g(int i, int j, vector<ll> &colour)
{
    ll res = 0;
    for (int m = i; m <= j; m++)
    {
        res = (res % 100 + colour[m] % 100) % 100;
    }
    return res;
}

ll f(vector<ll> &colors, int i, int j)
{
    if (i == j)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    ll res = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        res = min(res, f(colors, i, k) + f(colors, k + 1, j) + g(i, k, colors) * g(k + 1, j, colors));
    }
    return dp[i][j] = res;
}
int main()
{
    dp.clear();
    dp.resize(105, vector<int>(105, -1));
    int n;
    while (cin >> n)
    {
        vector<ll> colors(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            colors.push_back(x);
        }
        cout << f(colors, 0, colors.size() - 1) << endl;

        colors.clear();

        // cin >> n;
    }
}