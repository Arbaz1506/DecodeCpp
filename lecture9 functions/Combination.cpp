#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int combination(int nfact, int rfact, int n_rfact)
{
    int combination = nfact / (rfact * n_rfact);
    cout << " combination :" << combination;
    return 0;
}

int main()
{
    int n;
    cout << "ENTER THE VALUE OF n: ";
    cin >> n;
    int r;
    cout << "ENTER THE VALUE OF r: ";
    cin >> r;
    int q = (n - r);
    cout << "now,\nn-r=" << q << endl;
    factorial(n);
    cout << "factorial of n=" << factorial(n);
    cout << endl;
    factorial(r);
    cout << "factorial of r=" << factorial(r);
    cout << endl;
    factorial(q);
    cout << "factorial of n-r=" << factorial(q);
    cout << endl;
    int nfact = factorial(n);
    int rfact = factorial(r);
    int n_rfact = factorial(q);
    combination(nfact, rfact, n_rfact);
    return 0;
}