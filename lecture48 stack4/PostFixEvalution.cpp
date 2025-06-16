#include <iostream>
#include <stack>
using namespace std;

int solve(int val1, int val2, char ch)
{
    if (ch == '+')
        return val2 + val1;
    else if (ch == '*')
        return val2 * val1;
    else if (ch == '-')
        return val1 - val2;
    else
        return val1 / val2;
}
int main()
{
    string s = "79+4*8/3-"; // infix expression
    // we  need one stacks 1 for
    stack<int> vals;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            vals.push(s[i] - 48);
        }
        else
        {
            int val2 = vals.top();
            vals.pop();
            int val1 = vals.top();
            vals.pop();
            int ans= solve(val1,val2,s[i]);
            vals.push(ans);
        }
    }
    cout << vals.top();
}


