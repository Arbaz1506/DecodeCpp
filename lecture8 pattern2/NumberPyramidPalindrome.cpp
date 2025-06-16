#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ROWS :";
    cin >> n;
    int nsp = n - 1;
    int nsn = 1; // numbers of numberr
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {

            cout << " ";
        }
        nsp--;

        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int l = i-1; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }
}
