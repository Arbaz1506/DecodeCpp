#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter any number";
    cin >> x;
    float y = (float)x / 2; // type casting done from integer to float
    cout << y;
}