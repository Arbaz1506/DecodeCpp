#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{

    string str;
    getline(cin,str);
    cout << str;
    cout << endl;
    int n=str.size()/2;
    reverse(str.begin(), str.end()-n);
    cout << str;
}
