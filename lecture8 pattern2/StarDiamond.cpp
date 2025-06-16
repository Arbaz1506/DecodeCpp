#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ROWS: ";
    cin >> n;
    int nsp = n - 1;
    int nst = 1;
    int i;
    for (i = 1; i <= (2 * n - 1); i++)
    {
        for (int j = 1; j <= nsp; j++)
        {

            cout << " ";
        }

        for (int k = 1; k <= nst; k++)
        {
            cout << "*";
        }

        if (i > n - 1)
        {
            nst -= 2;
            nsp++;
        }
        else
        {
            nsp--;
            nst += 2;
        }
        cout << endl;
    }
}
