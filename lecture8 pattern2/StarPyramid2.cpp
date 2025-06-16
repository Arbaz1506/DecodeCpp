#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ROWS :";
    cin >> n;
    int nsp = n - 1; // nsp=number of  spaces
    int nst = 1;     // nst=number of stars
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        nsp--;
        for (int k = 1; k <= nst; k++)
        {
            cout << "*";
        }
        nst += 2;
        cout << endl;
    }
}
