#include <iostream>
#include <vector>

using namespace std;

vector<int> dp;

int fact(int n)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fact(n - 1) + fact(n - 2);
}

int main()
{

    int n;
    cin >> n;
    dp.clear();

    dp.resize(n + 1, -1);
    cout << fact(n);
    return 0;
}