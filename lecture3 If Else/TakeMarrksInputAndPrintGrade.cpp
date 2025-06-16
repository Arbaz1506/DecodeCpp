#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the mars obtained:";
    cin >> n;
    if (n >= 91 && n <= 100)
    {
        cout << "EXCELLENT PERFORMANCE";
        cout << endl;
    }
    else if (n >= 81 && n <= 90)
    {
        cout << "VERY GOOD PERFORMANCE";
        cout << endl;
    }
    else if (n >= 71 && n <= 80)

    {
        cout << "GOOD PERFORMANCE ";
        cout << endl;
    }
    else if (n >= 61 && n <= 70)
    {
        cout << "CAN DO BETTER ";
        cout << endl;
    }
    else if (n >= 51 && n <= 60)
    {
        cout << "AVERAGE";
        cout << endl;
    }
    else if (n >= 40 && n <= 50)
    {
        cout << "BELOW AVERAGE";
        cout << endl;
    }
    else
    {
        cout << "FAIL";
    }
}