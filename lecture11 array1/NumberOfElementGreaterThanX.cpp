#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
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
    // ool flag = false;
    for (int i = 0; i <= (n - 1); i++)
    {
        if (x < arr[i])
        {
            count++;
        }
    }
    cout << count;
}
