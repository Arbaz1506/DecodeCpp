#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int minProductSubset(vector<int> &a)
{
    int cn = 0;
    int cp = 0;
    int cz = 0;
    int product_pos = 1;
    int product_neg = 1;
    int largestNeg = INT_MIN;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < 0)
        {
            cn++;
            product_neg *= a[i];
            largestNeg = max(largestNeg, a[i]);
        }
        if (a[i] == 0)
        {
            cz++;
        }
        if (a[i] > 0)
        {
            cp++;
            product_pos *= a[i];
        }
    }

    if (cn == 0)
    {
        if (cz > 0)
            return 0;
        else
        {
            auto it = min_element(a.begin(), a.end());
            return *it;
        }
    }

    else{
        if(cn%2==0)
        {
            return (product_neg/largestNeg)*product_pos;

        }
        else{
            return product_neg*product_pos;
        }
    }
}
int main()
{
    vector<int>arr {1,2,9,99,0};
    cout<<minProductSubset(arr);

}