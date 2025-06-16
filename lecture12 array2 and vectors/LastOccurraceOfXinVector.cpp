#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v;
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT TO BE ENTERED:-";
    cin >> n;
    cout << "ENTER ELEMENTS OF VECTOR: ";
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
    cout << "ENTER THE ELEMENT TO BE SEARCHED:-";
    int x;
    cin >> x;

    for (int i = n; i >= 0; i--)
    {
        if (v[i] == x)
        {
            cout << "ELEMENT OCCURED LAST IN " << i + 1 << " POSITION"
                 << " AND " << i << " INDEX";
                 break;
        }
    }
}
