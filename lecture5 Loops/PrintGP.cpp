//2 4 16 32...n
// 1357....n
#include <iostream>
using namespace std;
int main()
{
    int i = 2;
    int n;
    cout << "enter the value of n";
    cin >> n;
    for (i; i <= n; i *=2)
    {
        cout << i << " ";
    }
}
