#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ROWS: ";
    cin >> n;
    for (int star = 1; star <= 2 * n - 1; star++)
    {
        cout << "*";
    }
    cout << endl;
    int m = n - 1;
    int nsp = 1;
    int i;

    for (i = 1; i <= m; i++)
    {

        for (int j = 1; j <= m + 1 - i; j++)
        {

            cout << "*";
        }
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        nsp += 2;
        for (int l = 1; l <= m + 1 - i; l++)
        {

            cout << "*";
        }
        cout << endl;
    }
}
