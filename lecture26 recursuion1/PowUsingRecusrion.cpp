#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (b == 0)
        return 1;
    if (a == 0 && b == 0)
    {
        cout << "O TO THE POWER ZERO IS UNDEFINED";
        return -100;
    }
    return a*power(a,b-1);
}
int main()

{
    int a, b;
    cout << "ENTER THE BASE:";
    cin >> a;
    cout << "ENTER THE EXPONENT: ";
    cin >> b;
    cout << power(a, b);
}