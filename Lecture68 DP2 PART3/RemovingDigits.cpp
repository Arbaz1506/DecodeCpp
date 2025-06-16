// CSE PROBLEM SET
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> get_digits(int n)
{
    vector<int> result;
    while (n > 0)
    {
        if (n % 10 != 0)
        {
            result.push_back(n % 10);
        }
        n = n / 10;
    }
    return result;
}

vector<int> DP;

int ftd(int n)
{
    if (n == 0)
        return 0;
    if (n <= 9)
        return 1;

    if (DP[n] != -1)
        return DP[n];

    vector<int> digit = get_digits(n);
    int size = digit.size();
    int result = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        result = min(result, ftd(n - digit[i]));
    }
    return DP[n] = 1 + result;
}



int main()
{
    DP.clear();
    DP.resize(1000005, -1);
    cout<<"Enter a number:";
    int n;
    cin >> n;
    cout << ftd(n) ;
}