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
    // prefix sum
    for (int i = i; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }
    // partition
    int flag = false;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (2 * arr[i] == arr[n - 1])
        {
            flag = true;
            idx = i;
            break;
        }
    }
    if (flag == true)
    {
        cout << "can be partition"
             << "  at idx=" << idx;
    }
    else
        cout << "cannot be partition";
}