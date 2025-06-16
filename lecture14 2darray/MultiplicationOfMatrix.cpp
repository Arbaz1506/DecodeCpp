#include <iostream>
using namespace std;
int main()
{
    int m, n, p, q;
    cout << "ENTER THE NUMBER OF ROWS OF 1ST MATRIX: ";
    cin >> m;
    cout << "ENTER THE NUMBER OF COLS OF 1ST MATRIX: ";
    cin >> n;
    cout << "ENTER THE NUMBER OF ROWS OF 2ND MATRIX: ";
    cin >> p;
    cout << "ENTER THE NUMBER OF COLS OF 2ND MATRIX: ";
    cin >> q;

    if (n == p)
    {
        int arr[m][n];
        cout << "ENTER THE ELEMENTS OF 1ST MATRIX:- \n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        int arr2[p][q];
        cout << "ENTER THE ELEMENTS OF 2ND MATRIX:- \n";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> arr2[i][j];
            }
        }
        cout << "THE ELEMENTS OF 1ST MATRIX:- \n"; 
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

        cout << "THE ELEMENTS OF 2ND MATRIX:- \n";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << arr2[i][j] << " ";
            }
            cout << endl;
        }
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                // res[i][j]=a[i][0]*b[0][i]+a[i][1]*b[1][i]....
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += arr[i][k] * arr2[k][j];
                }
            }
        }
        cout<<"THE MULTIPLIED MATRIX IS:-"<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
             cout << endl;
        }
       
    }
    else cout<<"MULTIPLICATION DOES NOT EXIST!";
}
