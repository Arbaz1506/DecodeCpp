#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter a number 1:";
    cin >> a;
    cout << "enter a number 2:";
    cin >> b;
    cout << "enter a number 3:";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << "is greatest";
        }
        else
        {
            cout << c << "is greatest";
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << "is  greatest";
        }
        else{
            cout<<c<<"is greatest";
        }
    }
}