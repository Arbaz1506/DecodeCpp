#include <iostream>
#include <vector>
using namespace std;
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
    cout << "ENTER THE VALUE OF DOUBLET:-";
    int x;
    cin >> x;
    for (int i = 0; i <= n - 2; i++)

    {
        for (int j = i+1; j <= n - 1; j++)
            if (v[i] + v[j] == x)
            {
                cout << "(" << i << " ," << j << ")" << endl;
            }
    }
}
