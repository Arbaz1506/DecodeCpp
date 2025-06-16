#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT TO BE ENTERED: ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ELEMENT OF THE ARRAY: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result = result ^ arr[i];
    }
    cout << result;
}