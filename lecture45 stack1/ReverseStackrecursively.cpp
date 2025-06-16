#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> &st)
{
    stack<int> temp;
    while (st.size() != 0)
    {
        temp.push(st.top());
        st.pop();
    }
    while (temp.size() != 0)
    {
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtBottom(stack<int> &st, int n)
{
    if (st.size() == 0)
    {
        st.push(n);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottom(st, n);
    st.push(x);
}

void reverseStack(stack<int> &st)
{
    if (st.size() == 1)
        return;
    int x = st.top();
    st.pop();
    reverseStack(st);
    pushAtBottom(st, x);
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << endl;
    reverseStack(st);
    print(st);
}