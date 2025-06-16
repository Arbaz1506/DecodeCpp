#include <iostream>
using namespace std;
int main()
{
    int n, m;
    int sum = 1;
    cout << "ENTER THE BASE=";
    cin >> n;
    cout << "ENTER THE EXPONENT=";
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        sum = sum * n;
    }
    cout << n << " raised to the power " << m << " is " << sum;
}