#include <iostream>
#include <vector>
using namespace std;
void subArray(vector<int> v, int arr[], int size, int idx)
{
    if (idx == size)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        cout << endl;
        return;
    }
    subArray(v, arr, size, idx + 1);

    if (v.size() == 0)
    {
        v.push_back(arr[idx]);
        subArray(v, arr, size, idx + 1);
    }
    else if (v[v.size() - 1] == arr[idx - 1])
    {
        v.push_back(arr[idx]);
        subArray(v, arr, size, idx + 1);
    }
}
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> n;
    int arr[n];

    cout << "ENTER THE ELEMENTS: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> v;
    subArray(v, arr, n, 0);
}
