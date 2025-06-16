#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS TO BE ENTERED: ";
    cin >> n;
    int arr[n];
    int prefix[n];
    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // prefix sum
    int p = arr[0];
    prefix[0] = 1;
    for (int i = 1; i < n; i++)
    {
        prefix[i] = p;
        p *= arr[i];
    }
    cout << "PREFIX PRODUCT SPECIAL CASE IS: ";
    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }
    cout << endl;
    // suffix array
    int s = arr[n - 1];
    int suffix[n];
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = s;
        s *= arr[i];
    }
    cout << "SUFFIX PRODUCT SPECIAL CASE IS: ";
    for (int i = 0; i < n; i++)
    {
        cout << suffix[i] << " ";
    }
    cout << endl;
    int ans[n];
    cout << "ANSWER IS: ";
    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix[i] * suffix[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}