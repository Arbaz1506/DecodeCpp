#include <string>
#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;
string consec(string s)
{
    stack<char> st;
    st.push(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if (st.top() != s[i])
            st.push(s[i]);
    }
    s = "";
    while (st.size() != 0)
    {
        s += st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    string s = "aabbcddaabffg";
    string ans= consec(s);
    cout<<ans;
}