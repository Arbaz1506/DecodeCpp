#include <iostream>
#include <vector>
using namespace std;
void Combination(vector<int> v, int arr[], int size, int target,int idx)
{
    if (target == 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i]<<" ";
        }
        cout << endl;
        return;
    }
    if (target < 0)
        return;
    for (int i = idx; i < size; i++)
    {
        v.push_back(arr[i]);
        Combination(v, arr, size, target -arr[i],i);
        v.pop_back();
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
    int target;
    cout << "ENTER THE TARGET :";
    cin >> target;
    Combination(v, arr, n, target,0);
}