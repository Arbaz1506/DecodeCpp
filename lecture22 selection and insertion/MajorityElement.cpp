#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT TO BE ENTERED: ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout<<"MAJORITY ELEMENTS ARE: ";
    cout << v[n / 2];
}