#include <iostream>
using namespace std;
bool isPalindrome(string s, int lo, int hi)
{
    if (lo >= hi)
        return true;
    else if (s[lo] != s[hi])
        return false;
    else
        return isPalindrome(s, lo + 1, hi - 1);
}

int main()
{
    string str;
    cout<<"ENTER STRING";
    cin >> str;
    cout << isPalindrome(str, 0, str.length() - 1);
}
