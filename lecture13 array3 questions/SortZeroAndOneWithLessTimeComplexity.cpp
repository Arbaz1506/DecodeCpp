#include <iostream>
#include <vector>
using namespace std;
int display(vector<int> &v1)
{
    cout << "THE ELEMENTS ARE:";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
}
void sorting(vector<int> &v2)
{
    int i = 0;
    int j = v2.size() - 1;
    while (i < j)
    {
        if (v2[i] == 0)
            i++;
        if (v2[j] == 1)
            j--;
        if (i > j)
            break;
        if (v2[i] == 1 && v2[j] == 0)
        {
            v2[i] = 0;
            v2[j] = 1;
            i++;
            j--;
        }
    }

    display(v2);
}
int main()
{
    vector<int> v;
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS TO  BE ENTERED:-";
    cin >> n;
    cout << "ENTER THE ELEMENT:";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    display(v);
    sorting(v);
}
