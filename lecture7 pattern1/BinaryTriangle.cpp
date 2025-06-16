#include <iostream>
using namespace std;
int main()
{
    int n;
    int c = 0;

    cout << "NO OF ROWS: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            c = 1;
        else
            c = 0;

        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
            if (c == 0)
                c = 1;
            else
                c = 0;
        }
        cout << endl;
    }
}