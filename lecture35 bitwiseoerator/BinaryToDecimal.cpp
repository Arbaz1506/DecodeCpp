#include <iostream>
using namespace std;
int binary_to_decimal(string &binary)
{
    int n = binary.length();
    int result = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        char ch = binary[i];
        int num = ch - '0';
        result = result + num * (1 << (n - i - 1));
    }
    return result;
}
int main()
{
    string str;
    cout << "enter the string as 0 and 1=";
    cin >> str;
    cout << binary_to_decimal(str);
}