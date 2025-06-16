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
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    int greatest = -1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > greatest)
                greatest = arr[i][j];
        }
        cout << endl;
    }
    cout << "THE GREATEST ELEMENT IS: " << greatest;
}