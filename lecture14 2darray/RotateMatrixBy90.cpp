#include <iostream>
using namespace std;
int main()
{
    int m;
    int n;
    cout << "ENTER THE NUMBER OF ROWS:";
    cin >> m;
    cout << "ENTER THE NUMBER OF COLOUMN:";
    cin >> n;
    int arr[m][n];
    cout << "ENTER THE ELEMENTS OF THE ARRAY:-" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "THE ENTERED ELEMENTS ARE:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "TRANSPOSED MATRIX:-" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        cout << endl;
    }
    // reversing

    for (int k = 0; k < n; k++)
    {
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }
    }
    cout << "THE ROTATED ELEMENTS ARE:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}