#include <iostream>
#include <stack>
using namespace std;

string solve(string val1, string val2, int ch)
{
    string s = "";
    s.push_back(ch);
    s += val1;
    s += val2;
    return s;
}
int main()
{
    string s = "79+4*8/3-"; // infix expression
    // we  need one stacks 1 for
    stack<string> vals;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            vals.push(to_string(s[i] - 48));
        }
        else
        {
            string val2 = vals.top();
            vals.pop();
            string val1 = vals.top();
            vals.pop();
            string ans = solve(val1, val2, s[i]);
            vals.push(ans);
        }
    }
    cout << vals.top();
}
