#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS TO BE ENTERED: ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum = arr[i] + arr[i - 1];
        arr[i] = sum;
    }
    for (int i = 0; i < n; i++)

    {
        cout << arr[i] << " ";
    }
}
