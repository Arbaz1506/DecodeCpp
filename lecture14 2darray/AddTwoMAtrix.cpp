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
    int arr[m][n], arr2[m][n];

    cout << "ENTER THE ELEMENT OF ARRAY:-";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "THE FIRST MATRIX IS: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "NOW THE SECOND MATRIX:-"<<endl;
     cout << "ENTER THE ELEMENT OF SECOND MATRIX:-";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }
    }
    cout << "THE SECOND MATRIX IS: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "THE SUM OF MATRIX IS: "<<endl;;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
}