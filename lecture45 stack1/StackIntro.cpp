#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    cout << st.size() << endl;
    st.push(20);
    cout << st.size() << endl;
    st.push(30);
    cout << st.size() << endl;
    st.push(40);
    cout << st.size() << endl;
    st.push(50);
    cout << st.size() << endl;
    // while (st.size() != 0) by this method we are making our stack empty 
    // {
    //     int x = st.top();
    //     cout << x << " ";
    //     st.pop(); // but in this case stack is getting empty
        
    // }
    // cout<<endl;
    stack<int> temp;
    while (st.size() != 0)
    {
        int x = st.top();
        cout<<x<<" ";
        st.pop();
        temp.push(x);
    }
    cout<<endl;
    while (temp.size() != 0)
    {
        int x = temp.top();
        temp.pop();
        st.push(x);
        cout << x << " ";
    }
}