#include <iostream>
using namespace std;
int main()
{
    int m, n;
    int i;
    int j;

    cout << "ENTER THE NUMBER OF ROWS OF MATRIX: ";
    cin >> m;
    cout << "ENTER THE NUMBER OF COLS OF MATRIX: ";
    cin >> n;

    int arr[m][n];
    cout << "ENTER THE ELEMENTS OF MATRIX:- \n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // wave print normal
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    cout << "THE SPIRAL WAVE :";
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = n - 1; j > 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}