#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "ENTER MONTH NUMBER:";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "JANUARY=31" << endl;
        break;
    case 2:
        cout << "FEBRUARY=28" << endl;
        break;
    case 3:
        cout << "MARCH=31" << endl;
        break;
    case 4:
        cout << "APRIL=30" << endl;
        break;
    case 5:
        cout << "MAY=31" << endl;
        break;
    case 6:
        cout << "JUNE=30" << endl;
        break;
    case 7:
        cout << "JULY=31" << endl;
        break;

    case 8:
        cout << "AUGUST=31" << endl;
        break;
    case 9:
        cout << "SEPTEMBER=30" << endl;
        break;
    case 10:
        cout << "OCTOBER=31" << endl;
        break;
    case 11:
        cout << "NOVEMBER=30" << endl;
        break;
    case 12:
        cout << "DECEMBER=31" << endl;
        break;
    default:
        cout << "INVALID INPUT";
    }
}