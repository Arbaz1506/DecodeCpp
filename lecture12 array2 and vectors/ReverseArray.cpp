#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(22);
    v.push_back(3);
    v.push_back(12);
    v.push_back(9);
    v.push_back(69);
    v.push_back(2);
    int i = 0;
    int j = v.size() - 1;
    while(i<=j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;


       i++;
       j--;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
