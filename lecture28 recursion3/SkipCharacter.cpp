#include <iostream>
#include<string>

using namespace std;
 // string str;
    // cout << "INPUT STRING :";
    // getline(cin, str);
    // cout<<"INPUT THE CHARACTER THAT HAS TO BE ELEMENATED: ";
    // char x;
    // cin>>x;
    // string s= "";
    // // cout<<endl;
    // for(int i=0;i<str.size();i++)
    // {
    //     if(str[i]!=x) s+=str[i];
    // }
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i];
    // }
    // this is correct method but we have to do with recursion
    string removeChar(string original, string modified, int x)
    {
        if (original.size() == 0)
            return modified;
        char ch = original[0];
        if (ch == x)
           return  removeChar(original.substr(1), modified, x);
        else
            return removeChar(original, modified + ch, x);
    }
    int main()
    {
        string str;
        // string s= "";
        cout << "INPUT STRING :";
        getline(cin, str);
        cout << "INPUT THE CHARACTER THAT HAS TO BE ELEMENATED: ";
        char x;
        string result=removeChar(str, "", x);
        cout << result;
    }