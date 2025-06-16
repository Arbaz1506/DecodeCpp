#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT: ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ELEMENTS OF ARRAY:-";
    for (int i = 0; i <= (n - 1); i++)
    {
        cin >> arr[i];
    }
    cout << "THE ELEMENTS ARE:-";
    for (int i = 0; i <= (n - 1); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "ENTER THE ELEMENT TO BE SEARCHED:-";
    int x;
    cin >> x;
    bool flag = false;
    for (int i = 0; i <= (n - 1); i++)
    {
        if (arr[i] == x)
        {
            flag = true;
        }
    }
    if (flag == true)
        cout << "ELEMENT PRESENT";
    else
        cout << "ELEMENT ABSENT ";
}