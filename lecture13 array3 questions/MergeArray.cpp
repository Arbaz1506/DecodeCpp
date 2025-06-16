#include <iostream>
using namespace std;
#include <vector>
int display(vector<int> &v1)
{
    cout << "THE ELEMENT OF VECTOR ARE:-";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
}
vector<int> merge(vector<int> &v1, vector<int> &v2)
{

    vector<int> v3((v1.size() + v2.size()));
    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    while (p1 <= v1.size() - 1 && p2 <= v2.size() - 1)
    {
        if (v1[p1] > v2[p2])
        {
            v3[p3] = v2[p2];
            p2++;
            p3++;
        }
        else if (v1[p1] < v2[p2])
        {
            v3[p3] = v1[p1];
            p1++;
            p3++;
        }
    }
    if (p1 == v1.size())
    {
        while (p2 <= v2.size() - 1)
        {
            v3[p3] = v2[p2];
            p3++;
            p2++;
        }
    }
    if (p2 == v2.size())
    {
        while (p1 <= v1.size() - 1)
        {
            v3[p3] = v1[p1];
            p3++;
            p2++;
        }
    }
    cout << "AFTER MERGEING:-";
    display(v3);
    
}
int main()
{
    vector<int> v1;
    vector<int> v2;
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT IN 1ST VECTOR:-";
    cin >> n;
    int m;
    cout << "THE ELEMENT OF 1ST VECTOR ARE:-";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    cout << "ENTER THE NUMBER OF ELEMENT IN 2ND VECTOR:-";
    cin >> m;
    cout << "THE ELEMENT OF 2ND VECTOR ARE:-";
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    display(v1);
    cout << endl;
    display(v2);
    cout << endl;
    merge(v1, v2);
}