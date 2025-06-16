#include <iostream>
using namespace std;
int star(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int o;
    cin >> o;
    star(n);

    star(m);

    star(o);
    return 0;
}