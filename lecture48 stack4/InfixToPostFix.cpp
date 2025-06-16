#include <iostream>
#include <stack>
using namespace std;
int priority(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}
string solve(string val1, string val2, char ch)
{
    string s = "";

    s += val1;
    s += val2;
    s.push_back(ch);
    return s;
}
int main()
{
    string s = "(7+9)*4/8-3"; // infix expression
    // we  need two stacks 1 for value and 1 for char
    stack<string> vals;
    stack<char> op;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            vals.push(to_string(s[i] - 48));
        }
        else
        {
            if (op.size() == 0)
                op.push(s[i]);
            else if (s[i] == '(')
                op.push(s[i]);
            else if (op.top() == '(')
                op.push(s[i]);
            else if (s[i] == ')')
            {
                while (op.top() != '(')
                {
                    char ch = op.top();
                    op.pop();
                    string val2 = vals.top();
                    vals.pop();
                    string val1 = vals.top();
                    vals.pop();
                    string ans = solve(val1, val2, ch);
                    vals.push(ans);
                }
                op.pop();
            }

            else if (priority(s[i]) > priority(op.top()))
                op.push(s[i]);
            else
            {
                while (op.size() > 0 && priority(s[i]) <= priority(op.top()))
                {
                    char ch = op.top();
                    op.pop();
                    string val2 = vals.top();
                    vals.pop();
                    string val1 = vals.top();
                    vals.pop();
                    string ans = solve(val1, val2, ch);
                    vals.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // jabtak poora stack empty na ho
    //  work karte rho
    while (op.size() > 0)
    {
        char ch = op.top();
        op.pop();
        string val2 = vals.top();
        vals.pop();
        string val1 = vals.top();
        vals.pop();
        string ans = solve(val1, val2, ch);
        vals.push(ans);
    }
    cout << vals.top();
}
