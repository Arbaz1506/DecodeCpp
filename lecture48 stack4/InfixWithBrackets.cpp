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
    string s = "(7+9)*4/8-3"; // infix expression
    // we  need two stacks 1 for value and 1 for char
    stack<int> vals;
    stack<char> op;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            vals.push(s[i] - 48);
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
                    int val2 = vals.top();
                    vals.pop();
                    int val1 = vals.top();
                    vals.pop();
                    int ans = solve(val1, val2, ch);
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
                    int val2 = vals.top();
                    vals.pop();
                    int val1 = vals.top();
                    vals.pop();
                    int ans = solve(val1, val2, ch);
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
        int val2 = vals.top();
        vals.pop();
        int val1 = vals.top();
        vals.pop();
        int ans = solve(val1, val2, ch);
        vals.push(ans);
    }
    cout << vals.top();
}
