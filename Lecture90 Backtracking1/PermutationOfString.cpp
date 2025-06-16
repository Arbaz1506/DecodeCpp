#include <iostream>
#include <vector>
using namespace std;
void permutation(string str, string res)
{
    if (str.size() == 0)
        {
            cout<<res<<" ";
            return;
        }

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        string left = str.substr(0, i);
        string right = str.substr(i + 1);
        string ros = left + right;
        permutation(ros, res + ch);
    }
}
int main()
{
    string str = "abc";
    permutation(str,"");
}