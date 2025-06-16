#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    string s, t;
    cout << "ENTER THE FIRST STRING :";
    getline(cin, s);
    cout << "ENTER THE SECOND STRING :";
    getline(cin, t);
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s == t)
    {
        cout << "YES ANAGRAM";
    }
    else
        cout << "NOT AN ANAGRAM";
}