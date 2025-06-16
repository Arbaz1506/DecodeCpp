#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> st)
{
    stack<int>temp;
    while (st.size() != 0)
    {
        int x = st.top();
        cout<<x<<" ";
        st.pop();
        temp.push(x);
    }
    while (temp.size() != 0)
    {
        int x = temp.top();
        temp.pop();
        st.push(x);
        
    }
    cout<<endl;
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);

    stack<int> temp;
    stack<int> temp2;
    while (st.size() != 0)
    {
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    cout << endl;
    while (temp.size() != 0)
    {
        int x = temp.top();
        temp.pop();
        temp2.push(x);
    }
    while (temp2.size() != 0)
    {
        int x = temp2.top();
        temp2.pop();
        st.push(x);
    }
    print(st);
}