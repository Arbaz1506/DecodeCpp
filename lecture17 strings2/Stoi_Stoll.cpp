#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
    string str="1234";
    int x = stoi(str);///this converts string to integer
    cout<<x+1<<endl;
    // what is the use of stoll then ?
    string str1="1234567891234";

       long long  y = stoll(str1);
    //int y = stoi(str1);
    // now this stoi cannt change big numerical value 
    //so we will use stoll which means string to longlong
    cout<<y;



   
}