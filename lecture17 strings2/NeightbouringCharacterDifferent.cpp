#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "ENTER STRING: ";
    getline(cin, str);
    int count = 0;

    for (int i = 0; i <= str.size(); i++)
    {
        if (str.size() == 1)
            break;
        if (i == 0)
        {
            if (str[i] != str[i + 1])
                count++;
        }
        else if (i == str.size())
        {
            if (str[i] == str[i - 1])

                count++;
        }
        else if (str[i] != str[i - 1] && str[i] != str[i + 1])
            count++;
    }
    cout << count;
}