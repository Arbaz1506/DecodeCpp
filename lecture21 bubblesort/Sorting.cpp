#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "ENTER THE SIIZE OF VECTOR: ";
    cin >> n;
    vector<int> v;
    cout << "ENTER THE ELEMENT OF VECTOR: " << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end()); // time complexity is O(nlogn) which is the best for sorting
    cout << "ASCENDING ORDER SORTING: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "DESCENDING ORDER SORTING: ";
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    // this is the in built sorting of the vectors
}
