#include <iostream>
#include <vector>
using namespace std;
int display(vector<int> &v1)
{
    cout << "THE ELEMENTS ARE:-";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
}
int reverse(int n, int k, vector<int> &v2)
{
    while (n <= k)
    {
        int temp = v2[n];
        v2[n] = v2[k];
        v2[k] = temp;
        n++;
        k--;
    }
}
int main()
{
    int k;
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT TO BE INSERTED:-";
    cin >> n;
    cout << "ENTER THE ELEMETS:-";
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << endl;
    display(v);
    cout << endl;
    cout << "ENTER BY HOW MUCH THE ARRAY HAS TO BE ROTATED:-";
    cin >> k;
    if (k > n)
        k = k % n;
    reverse(0, n - k - 1, v);
    reverse(n - k, n - 1, v);
    reverse(0, n - 1, v);
    cout << endl;
    display(v);
}
