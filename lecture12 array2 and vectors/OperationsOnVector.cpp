#include <iostream>
using namespace std;
#include <vector>
int main()
{

    vector<int> v;
    v.push_back(6);
    v.push_back(58);
    v.push_back(41);
    v.push_back(9);
    v.push_back(2);
    v.push_back(10);
    v.push_back(6);
    v.push_back(58);
    v.push_back(10);
    v.push_back(6);
    v.push_back(58);
    v.push_back(41);
    v.push_back(9);
    v.push_back(2);
    v.push_back(58);
    v.push_back(41);
    v.push_back(9);
    v.push_back(987);

    // now how can we print all the array saath me?
    // loop lagayenge but kaise pata chalega kitna element haii? oviously ginn krr nahii to size() wala operator use krenge
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl
         << "NEW ARRAY AFTER POPING BACK" << endl;
    v.pop_back();
    v.pop_back();
     // jitna back v.pop_back karenge element minus hote jayega
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    //pop back krne k baad ize kam hoga but capacity kam ho jayegii
}