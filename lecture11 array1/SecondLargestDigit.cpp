#include <iostream>
#include <climits>
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
    int max = INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << endl
         << "THE LAGREST NUMBER IS:-" << max<<endl;
    int sec_max = INT_MIN;
    for (int i = 0; i <= (n - 1); i++)
    {
        if (sec_max < arr[i] && arr[i] != max)
        {
            sec_max = arr[i];
        }
    }
    cout << "SECOND LARGEST NUMBER:-" << sec_max;
}