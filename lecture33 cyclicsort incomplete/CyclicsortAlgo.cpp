#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE SIZE OF THE ARRAY: ";
    cin >> n;
    int arr[n];
    cout << "ENTER NUMBER FROM 1 TO N IN RANDOM ORDER: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    while (i < n)
    {
        int correctIdx = arr[i] - 1;
        if (i == correctIdx)
            i++;
        else
            swap(arr[i], arr[correctIdx]);
    }
    cout << "SORTED ARRAY:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}