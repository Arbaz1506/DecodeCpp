#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> h;
int k;
vector<int> dp;
int frog(int i)
{
    if (i >= h.size())
        return INT_MAX;
    if (i == h.size() - 1)
    {
        return 0;
    }
    if(dp[i]!=-1)return dp[i];
    int ans = INT_MAX;

    for (int j = 1; i <= k; i++)
    {
        if (i + j >= h.size())
            break;
        ans = min(ans, abs(h[i] - h[i + j]) + frog(i + j));
    }
    return dp[i]= ans;
}

int main()
{
    int n;
    cin >> n >> k;
    h.resize(n);
    dp.resize(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    cout << frog(0);
    return 0;
}