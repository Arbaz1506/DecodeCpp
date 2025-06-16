#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "ENTER THE 1ST NUMBER : ";
    cin >> a;
    cout << "ENTER THE 2ND NUMBER : ";
    cin >> b;
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "AFTER SWAPPING:-" << endl;
    cout << "THE FIRST NUMBER IS: " << a << endl;
    cout << "THE SECOND NUMBER IS: " << b;
}