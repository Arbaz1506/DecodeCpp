#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1|| n==0)
        return 1; // base case
    int ans = n * fact(n - 1); // recursive call
    return ans;
}
int main()
{
    int n;
    cout << "ENTER THE NUMBER WHOSE FACTRORIAL HAS TO BE FOUND: ";
    cin >> n;
    cout << fact(n);
}
