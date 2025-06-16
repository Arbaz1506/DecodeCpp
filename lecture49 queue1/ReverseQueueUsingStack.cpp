#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void display(queue<int> &q)
{
    cout << "Displaying Queue" << endl;
    for (int i = 0; i < q.size(); i++)
    {

        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
}
void reverse(queue<int> &q)
{
    stack<int> st;
    while (q.size()>0)
    {
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while (st.size()>0)
    {
        int x = st.top();
        st.pop();
        q.push(x);
    }
    cout << "After Reversing ";
    display(q);
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    cout << endl;
    reverse(q);
}