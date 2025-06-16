#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
    string str;
    cout << "ENTER STRING: ";
    getline(cin, str);
    stringstream ss(str);
    string temp;
    while(ss>>temp)
    {
        cout<<temp<<endl;
    }
   
}