#include <iostream>
using namespace std;
int swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    cout << "AFTER SWAPPPING:-";
}
int main()
{
    int a, b;
    cout << "ENTER THE VALUE OF a: ";
    cin >> a;
    cout << "ENTER THE VALUE OF b: ";
    cin >> b;
    swap(&a, &b);
    cout << endl
         << "VALUE OF a: " << a << endl;
    cout << "VALUE OF b: " << b << endl;
}