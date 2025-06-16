#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout << "ENTER THE NUMBER: ";
    cin >> x;
    cout << "NUMBER TO BE CONVERTED INTO: ";
    cin >> y;
    cout << __builtin_popcount(x ^ y);
    return 0;
}