#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter a character: ";
    cin >> ch;
    int y = (int)ch;
    if (y >= 65 && y <= 122)
    {
        cout << "IT IS AN ALPHABET";
        cout << endl
             << "AND THE APHABET IS " << ch;
    }
    else
    {
        cout << "NOT AN ALPHABET";
    }
}