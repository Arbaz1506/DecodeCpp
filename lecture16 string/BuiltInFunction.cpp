#include <iostream>
#include<string>

using namespace std;
int main(){

    string str;
    cout << "ENTER THE STRING :";
    getline(cin, str);
    cout<<str;
    cout << endl
         << str.size() << endl; // this shows the size of the string excluding the null character and also we can use 
         cout<<str.length()<<endl;//same result as str.size() we can use both
    string str1;
    cout<<"ENTER THE SECOND STRING: ";
    getline(cin,str1);
    str1.push_back('e');//used to add extra character
    cout<<str1;
    str1.pop_back();//use to remove character from backward
    cout<<endl<<str1;

}

