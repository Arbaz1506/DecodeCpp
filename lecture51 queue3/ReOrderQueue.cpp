#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()

{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    int half = q.size() / 2;
    stack<int> st;
    for (int i = 0; i < half; i++)
    {
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while (st.size() > 0)
    {
        int x = st.top();
        st.pop();
        q.push(x);
    }
    for (int i = 0; i < half; i++)
    {
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while (st.size() > 0)
    {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }

    // reverse
    while (q.size() > 0)
    {
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while (st.size() > 0)
    {
        int x = st.top();
        st.pop();
        q.push(x);
    }

    // display()
    int size = q.size();
    for (int i = 0; i < size; i++)
    {

        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
}