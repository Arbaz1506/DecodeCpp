#include <iostream>
#include <unordered_set> // we have used this set because agar 2 same character hoga to situaton problematic ho jayega
using namespace std;

void permutation(string &str, int i)
{
    if (i == str.size() - 1)
    {
        cout << str << " ";
        return;
    }
    unordered_set<char> visited;

    for (int idx = i; idx < str.size(); idx++)
    {
        if (visited.count(str[idx]))
            continue;

        visited.insert(str[idx]);
        swap(str[idx], str[i]);
        permutation(str, i + 1);
        swap(str[idx], str[i]);
    }
}

int main()
{
    string str = "abca";
    permutation(str, 0);
    return 0;
}