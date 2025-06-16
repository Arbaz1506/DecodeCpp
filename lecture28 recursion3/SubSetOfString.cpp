#include <iostream>
using namespace std;
void printsubset(string original, string ans)
{
    if (original.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch= original [0];
    printsubset(original.substr(1),ans+ch);
    printsubset(original.substr(1),ans);

}
int main()
{
    string str;
    cout<<"ENTER THE STRING :";
    cin >> str;
    printsubset(str, "");
}