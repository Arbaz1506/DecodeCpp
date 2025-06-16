#include <iostream>
using namespace std;
void generateBinary(string s, int n)
{
    if (s.length() == n)
    {
        cout << s;
        cout << endl;
        return;
    }
    generateBinary(s + '0', n);
    if (s == "")
    {
        generateBinary(s + '1', n);
    }
    else if (s[s.length() - 1] =='0')
    {
        generateBinary(s + '1', n);
    }
}
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;

    generateBinary("", n);
}