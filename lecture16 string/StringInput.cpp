#include <iostream>
using namespace std;
#include <string>
int main()

{
    string s;
    cin >> s;
    cout << s;
    // simple number input jaisi kahanii haii
    // but error ayega when we put space btwn the string
    cout << endl;
    string s1;
    cin>>s1;
    cout<<s1<<endl;
    //jaise hii space dale to space k baad wala character ka input hoga hii naahii
    /// why is this happening?
    // remember when we use to take multiple input to whenever we enter space it mean we wannt too take the second number input
    // how to tackle this prblem ?
    // so cin creates such probelm then how shud we tackle this probelem?
    string s2;
    getline(cin, s2);
    cout << s2;
}