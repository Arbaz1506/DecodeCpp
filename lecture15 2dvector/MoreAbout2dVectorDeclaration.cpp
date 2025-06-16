#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> v(3, 2); // now this means ki ve have made 1Dvector and the initial three element are two
    cout << v[0] << " ";
    cout << v[0] << " ";
    cout << v[0] << " " << endl;

    // vector<vector<int>>v1(3,3); but this gives error that is in 2D  format it gives error
    // if we want ot make a 2d vector of desired size that is desired rows and column that we have to do this
    vector<vector<int>> v1(3, vector<int>(4)); // thsi means we have made a vector of three rows and 4 columns
    // in more simple word this means 3 means kitne vector honge aur4 means harr vector ka size kya hoga
    // we can use these concept as 2Darray
}