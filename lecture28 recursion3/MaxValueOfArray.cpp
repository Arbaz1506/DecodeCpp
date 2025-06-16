#include <iostream>
#include <limits.h>
using namespace std;
int display(int arr[], int n, int idx, int max)
{
    if (idx == n)
    {
        cout << "LARGEST ELEMENT: " << max;
        return 0;
    }

    if (arr[idx] > max)
        max = arr[idx];
    display(arr, n, idx + 1, max);
}
int input_array(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    display(arr, n, 0, INT_MIN);
}
int main()
{
    int n;
    cout << "ENTER THE ELEMENT OF THE ARRAY :";
    cin >> n;
    int arr[n];
    input_array(n, arr);
}