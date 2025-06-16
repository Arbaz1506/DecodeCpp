#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    string str;
    vector<string> v;
    cout << "ENTER STRING: ";
    getline(cin, str);
    stringstream ss(str);
    string temp;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << "THE SORTED ARRAY: " << endl;
    sort(v.begin(), v.end());
    int count = 1;
    int maxCount = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        maxCount = max(maxCount, count);
    }
    count = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        maxCount = max(maxCount, count);
        if (count == maxCount)
            cout << v[i] << " " << maxCount << endl;
    }
}