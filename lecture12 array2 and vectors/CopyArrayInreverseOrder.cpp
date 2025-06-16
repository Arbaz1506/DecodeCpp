#include <iostream>
#include <vector>
using namespace std;
int display(vector<int> a)
{
    for (int i = 0; i <a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(11);
    v1.push_back(98);
    v1.push_back(51);
    v1.push_back(12);
    display(v1);
    vector<int> v2(v1.size()) ;
    for (int i = 0; i < v2.size(); i++)
    {
        int j = v1.size() - 1 - i;

        v2[i] = v1[j];
    }
    display(v2);
}