#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> m;

    pair<string, int> p1;
    p1.first = "Arbaz";
    p1.second = 99;

    pair<string, int> p2;
    p2.first = "Ahmed";
    p2.second = 9;

    pair<string, int> p3;
    p3.first = "Asad";
    p3.second = 91;

    pair<string, int> p4;
    p4.first = "Arshh";
    p4.second = 29;

    m.insert(p1);

    m.insert(p2);

    m.insert(p3);

    m.insert(p4);

    m["Anish"] = 41; // another way to insert

    for (pair<string, int> p : m) // poora pair likhne ki jagah Auto likhenge kaam bann jayega
    {
        cout << p.first << "   " << p.second;
        cout << endl;
    }
    // cout << endl;
    cout<<"Size:-"<< m.size()<<endl;
    cout << "After Erasing:-" << endl;

    m.erase("Arbaz");

    for (auto p : m) // poora pair likhne ki jagah Auto likhenge kaam bann jayega
    {
        cout << p.first << "   " << p.second;
        cout << endl;
    }
        cout<<"Size:-"<<m.size()<<endl;

        cout<<m["Anish"]<<endl; // gives value of the key
}