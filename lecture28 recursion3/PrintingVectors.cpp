#include <iostream>
#include <vector>

using namespace std;
int display(vector<int> &v, int idx)
{
    if (idx == v.size())
        return 0;
    cout << v[idx] << " ";
    display(v, idx+1);
}
void input_vector(vector<int> &v)
{
    int n;
    cout << "ENTER THE SIZE OF VECTOR: ";
    cin >> n;
    cout << "ENTER THE ELEMENT OF THE VECTOR :";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    display(v, 0);
}
int main()
{
    vector<int> v;
    input_vector(v);
    return 0;
}