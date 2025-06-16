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
void pushAtAnyIdx(stack<int> &st)
{
    int idx;
    cout<<"Enter at what index you want to insert: ";
    cin>>idx;
    stack<int> temp;
    while (st.size() > idx)
    {
        temp.push(st.top());
        st.pop();
    }
    cout << "Enter element to be inserted: ";
    int n;
    cin >> n;
    st.push(n);
    while (temp.size() != 0)
    {
        st.push(temp.top());
        temp.pop();
    }
    print(st);
}

void pushAtBottom(stack<int> &st)
{
    stack<int> temp;
    while (st.size() != 0)
    {
        temp.push(st.top());
        st.pop();
    }
    cout << "Enter element to be inserted at bottom: ";
    int n;
    cin >> n;
    st.push(n);
    while (temp.size() != 0)
    {
        st.push(temp.top());
        temp.pop();
    }
    print(st);
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
    cout << endl;
    // pushAtBottom(st);
    // cout<<endl;
    pushAtAnyIdx(st);

}