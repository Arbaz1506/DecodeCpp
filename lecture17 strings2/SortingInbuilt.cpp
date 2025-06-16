#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout << "ENTER THE STRING:";
    getline(cin, str);
    cout << "SORTED STRING: ";
    sort(str.begin(), str.end());
    cout<<str;
}