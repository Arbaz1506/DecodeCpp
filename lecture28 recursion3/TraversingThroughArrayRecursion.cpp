#include <iostream>
using namespace std;
int display(int arr[], int n, int idx)
{
    if (idx == n)
        return 0;
    cout << arr[idx] << " ";
    display(arr, n, idx + 1);
}
int input_array(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    display(arr, n, 0);
}
int main()
{
    int n;
    cout << "ENTER THE ELEMENT OF THE ARRAY :";
    cin >> n;
    int arr[n];
    input_array(n, arr);
}