#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT: ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ELEMENT:";
    for (int i = 0; i <= (n - 1); i++)
    {
        cin >> arr[i];
    }
    cout << "THE ELEMENTS ARE:-";
    for (int i = 0; i <= (n - 1); i++)
    {
        cout << arr[i] << " ";
    }
    int max = arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << endl
         << "THE LAGREST NUMBER IS:-" << max;
}