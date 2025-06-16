#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string str1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'X')
            str1.push_back(str[i]);
    }
    for (int i = 0; i < str1.size(); i++)
    {
        bool swap = false;
        for (int j = 0; j < str1.size() - 1 - i; j++)
        {
            if (str1[j] > str1[j + 1])
            {
                char temp;
                temp = str1[j + 1];
                str1[j + 1] = str1[j];
                str1[j] = temp;
                swap = true;
            }
        }
        if (swap == false)
            break;
    }
    cout << "THE SORTED STRING AFTER REMOVING CHARACTER GREATER THAN X IS: ";
    cout << str1;
}
