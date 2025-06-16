#include <iostream>
#include <vector>
using namespace std;
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

    //  since v is vector of vector to v me pushback ek vector krenge
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    /// now if i want to print element of the given array
    // v1 will be the first cols
    /// v2 the second and respectively
    // so now !
    cout << v[0][0] << endl;
    cout << v[1][1] << endl;
    cout << v[2][4] << endl;
}
