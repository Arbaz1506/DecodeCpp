#include <iostream>
using namespace std;
int febo(int n)
{
    if (n==1 || n==2) return 1;
    else
    return febo(n-1)+febo(n-2);
}
int main()
{
    int a;

    cout << "ENTER THE NUMBER OF TERM WANTED:";
    cin >> a;
    cout<<febo(a);
}