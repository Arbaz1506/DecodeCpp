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
}
void sorting(vector<int> &v2)
{
    int num_of_zeros = 0;
    int num_of_one = 0;
    for (int i = 0; i < v2.size(); i++)
    {
        if (v2[i] == 0)
        {
            num_of_zeros += 1;
        }
        else
            num_of_one += 1;
    }
    for (int i = 0; i < v2.size(); i++)
    {
        if (i < num_of_zeros)
            v2[i] = 0;
        else
            v2[i] = 1;
    }
    cout << endl;
    display(v2);
}
int main()
{
    vector<int> v;
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS TO  BE ENTERED:-";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    display(v);
    sorting(v);
}
