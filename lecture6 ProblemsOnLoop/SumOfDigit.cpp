#include <iostream>
using namespace std;
int main()
{
    int n;
    int lastdigit = 0;
    int sum = 0;
    cout << "ENTER THE NUMBER: ";
    cin >> n;
    while (n > 0)
    {
        lastdigit = n % 10;
        sum = sum + lastdigit;
        n /= 10;
    }
    cout << sum;
}