#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTY TO BE ENTERED IN THE ARRAY: ";
    cin >> n;
    int arr[n];
    cout << "enter the element in ascending order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int hi = n - 2;
    int lo = 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            cout << "PEAK ELEMENT" << arr[mid];
            break;
        }
        else if (arr[mid] > arr[mid + 1])
            hi = mid - 1;
        else
            lo = mid + 1;
    }

}