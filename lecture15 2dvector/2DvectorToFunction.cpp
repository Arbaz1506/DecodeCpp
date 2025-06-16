#include <iostream>
using namespace std;
#include <vector>
void change2Dvectr(vector<vector<int>> &v_changed)
{
    v_changed[0][0] = 69;
}
void lenght_2d(vector<vector<int>> &vec)
{
    cout<<vec.size();
}
int main()
{

    vector<vector<int>> v;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    cout << v[0][0] << endl;
    change2Dvectr(v); // we need not to mention the size of vector this is the advantage of passing 2Dvector whereas while passing array we have to mention size
    cout << v[0][0] << endl;
    lenght_2d(v);
}
