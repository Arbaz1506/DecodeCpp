#include <iostream>
using namespace std;
int main()
{
    int choice, num1, num2, add, sub, mult, div;

    cout << "ENTER 1 FOR ADD";
    cout << endl;
    cout << "ENTER 2 FOR SUB";
    cout << endl;
    cout << "ENTER 3 FOR MULT";
    cout << endl;
    cout << "ENTER 4 FOR DIVIDE";
    cout << endl;
    cout << "NOW ENTER YOUR  CHOICE:";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "ENTER THE NUMBER:";
        cin >> num1;
        cout << "ENTER THE NUMBER:";
        cin >> num2;
        add = num1 + num2;
        cout << "ADDED VALUE:" << add;
        break;

    case 2:
        cout << "ENTER THE NUMBER:";
        cin >> num1;
        cout << "ENTER THE NUMBER:";
        cin >> num2;
        sub = num1 - num2;
        cout << "SUBTRACTED VALUE:" << sub;
        break;
    case 3:
        cout << "ENTER THE NUMBER:";
        cin >> num1;
        cout << "ENTER THE NUMBER:";
        cin >> num2;
        mult = num1 * num2;
        cout << "MULTIPLIED VALUE:" << mult;
        break;
    case 4:
        cout << "ENTER THE NUMBER:";
        cin >> num1;
        cout << "ENTER THE NUMBER:";
        cin >> num2;
        div = num1 / num2;
        cout << "DIVIDED VALUE:" << div;
        break;
    default:
        cout << "INVALID INPUT";
    }
}