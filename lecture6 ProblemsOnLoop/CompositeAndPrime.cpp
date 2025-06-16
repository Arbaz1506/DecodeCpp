#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "ENTER THE NUMBER TO CHECK:";
    cin >> num;
    bool flag = true;
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            // cout << "COMPOSITE";
            flag = false;
            break;
        }
    }
    if (num == 1)
        cout << "1 IS NEITHER PRIME NOR COMPOSITE";
    else if (flag == true)
        cout << "NUMBER IS PRIME";
    else
        cout << "NUMBER IS COMPOSITE";
}