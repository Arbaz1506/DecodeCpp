#include <iostream>
#include <vector>
#include <climits>
#define ll long long int
using namespace std;

// Problem From At coder D-knapsack1
vector<vector<ll>> dp(105, vector<ll>(100005, -1));
ll f(vector<int> &wts, vector<int> &val, int idx, int w)
{
    if (idx == wts.size())
        return 0;
    if (dp[idx][w] != -1)
        return dp[idx][w];
    ll ans = INT_MIN;
    // not pick
    ans = max(ans, f(wts, val, idx + 1, w));

    // pick
    if (wts[idx] <= w)
    {
        ans = max(ans, val[idx] + f(wts, val, idx + 1, w - wts[idx]));
    }
    return dp[idx][w] = ans;
}

int main()
{
    int n, w;
    cin >> n >> w;

    vector<int> wts, val;
    for (int i = 0; i < n; i++)
    {
        int wt, v;
        cin >> wt >> v;
        wts.push_back(wt);
        val.push_back(v);
    }

    cout << f(wts, val, 0, w);
}