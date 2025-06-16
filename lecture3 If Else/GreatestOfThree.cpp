#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "enter the number 1=";
    cin >> num1;
    cout << "enter the number 2=";
    cin >> num2;
    cout << "enter the number 3=";
    cin >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << "is greatest which is  num1" << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << num2 << "is greatest which is num2" << endl;
    }
    else
        cout << num3 << "  is greatest which is num3";
}