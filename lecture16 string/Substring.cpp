#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"ENTER THE STRING: ";

    getline(cin,str);
    cout<<str.substr(2);
    //str.substr(idx) this mean ki given index selekar uske baad sabhii ko print kro aage wala chhodkar
    cout<<endl;
    cout<<str.substr(1,3);//str.substr(idx,length)
;







}