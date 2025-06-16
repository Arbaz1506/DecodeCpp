#include <iostream>
using namespace std;
// vector are passed by value
// each time you pass new vector is created

#include <vector>
int change(vector<int> a)
{
    a[1] = 987;
}
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(81);
    v.push_back(93);
    v.push_back(18);
    v.push_back(76);
    v.push_back(8);
    v.push_back(30);
    v.push_back(2);
    for (int i = 0; i < 7; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    change(v);
    for (int i = 0; i < 7; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}