#include <iostream>
using namespace std;
int main()
{
    string str;
    int count = 0;
    cout << "ENTER THE STRING :";
    getline(cin, str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    cout << "NUMBER OF VOWELS=" << count;
}