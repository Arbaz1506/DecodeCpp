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
    int target;
    cout << "ENTER THE TARGET TO BE FOUND: ";
    cin >> target;
    int lo = 0;
    int hi = n - 1;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == target)
        {
            if (arr[mid - 1] == target)
                hi = mid - 1;
            else
            {
                flag = true;
                cout << mid;
                break;
            }
        }
        else if (arr[mid] < target)
            lo = mid + 1;
        else
            hi = mid + 1;
    }
    if (flag == false)
        return -1;
}