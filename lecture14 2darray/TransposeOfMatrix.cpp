#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "ENTER THE NUMBER OF ROWS: ";
    cin >> m;
    int n;
    cout << "ENTER THE NUMBER OF COLOUMN: ";
    cin >> n;
    int arr[m][n];

    cout << "ENTER THE ELEMENT OF ARRAY:-";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "THE ENTERED ELEMENTS ARE: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // TRANSPOSE OF MATRIX
    cout << "THE TRANSPOSE OF THE MATRIX ARE:-" << endl;
    int transpose[n][m];

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
             transpose[j][i] = arr[i][j];
        }
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << transpose[j][i]<<" ";
        }
        cout<<endl;
    }
}