#include <iostream>
#include <string>
#include<algorithm>

using namespace std;
int main()
{

    string str;
    cout << "ENTER THE STRING :";
    getline(cin, str);
    cout << str;
    cout << endl;
    reverse(str.begin(), str.end());
    cout << str;
}
