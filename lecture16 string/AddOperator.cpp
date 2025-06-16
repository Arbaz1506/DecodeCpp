#include <iostream>
#include<string>

using namespace std;
int main(){

    string str;
    cout << "ENTER THE STRING :";
    getline(cin, str);
    cout<<str;
    cout << endl;
         
    string str1;
    cout<<"ENTER THE SECOND STRING: ";
    getline(cin,str1);
    cout<<str1<<endl;
    str=str+str1;//add or modiify two strings
    cout<<str;
    cout<<endl;
    str="xyz"+str;
    cout<<str;
}

