#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"ENTER THE NUMBER: ";
    cin>>x;
    string s= to_string(x);
    cout<<"NUMBER OF DIGITS ARE: "<<s.size();
}