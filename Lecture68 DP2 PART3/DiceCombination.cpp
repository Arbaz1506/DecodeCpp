#include <iostream>
#include <vector>
#define mod 1000000007
#define ll long long int
using namespace std;
vector<ll> dp;

ll ftd(int n)
{
    if (n == 0)
        return 1;

    if (dp[n] != -1)
        return dp[n];
    ll sum = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (n - i < 0)
            break;
        sum = (sum % mod + ftd(n - i) % mod) % mod;
    }
    return dp[n] = sum % mod;
}

ll fbu(int n)
{
    dp[0] = 1;
    for (int k = 1; k <= n; k++)
    {
        ll sum = 0;
        for (int i = 1; i <= 6; i++)
        {
            if (k - i < 0)
                break;
            sum = (sum % mod + fbu(k - i) % mod) % mod;
        }
        dp[k] = sum % mod;
    }
    return dp[n];
}

int main()
{
    dp.clear();
    dp.resize(10000006, -1);
    int n;
    cin >> n;
    cout << ftd(n) << "  " << fbu(n) << endl;
}