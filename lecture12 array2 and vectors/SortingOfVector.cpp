#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    vector<int> v;
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT TO BE ENTERED: ";
    cin >> n;
    cout << "ENTER THE ELEMENT" << endl;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "THE ELEMENTS ARE: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(), v.end()); // THIS HELPS TO SORT THE VECTOR IN VERY OPTIMIZED WAY BUT WE HAVE TO INCLUDE ONE hEADER FILE
    cout << "THE ELEMENTS AFTER SORTING  ARE: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}