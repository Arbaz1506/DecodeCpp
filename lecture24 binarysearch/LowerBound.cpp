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
    int hi = n - 1;
    int lo = 0;
    int target;
    cout << "ENTER THE TARGET WHOSE LOWER BOUND HAS TO BE FOUND: ";
    cin >> target;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target)
        {
            cout << arr[mid - 1];
            flag = true;
            break;
        }
        else if (arr[mid] > target)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    if (flag == false)
    {
        cout << arr[hi];
    }
}