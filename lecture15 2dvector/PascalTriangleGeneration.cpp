#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m = 5;
    vector<vector<int>> v;
    for (int i = 0; i < m; i++) // Change the loop condition from 1 to 0
    {
        vector<int> a(i + 1); // Change the vector size from i to i+1
        v.push_back(a);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                v[i][j] = 1;
            else
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
