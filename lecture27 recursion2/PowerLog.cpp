#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (b == 0)
        return 0;
    if (b == 1)
        return a;
    if (b % 2 == 0)
    {
        int ans = power(a, b / 2);
        return ans * ans;
    }
    else
    {
        int ans = power(a, b / 2);
        return ans * ans * ans;
    }
}
int main()
{
    int a, b;

    cout << "ENTER THE BASE :";
    cin >> a;

    cout << "ENTER THE EXPONENT :";
    cin >> b;
    cout << a << " to the power " << b << "= " << power(a, b);
}