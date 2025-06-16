#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "ENTER THE NUMBER OF ROWS:";
    cin >> m;
    n = m; // since we want square matrix;
    int arr[m][n];
    cout << "ENTER THE ELEMENT OF THE MATRIX:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "THE ENTERED MATRIX IS:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //transposing
    int transpose[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            
        }
    }
     cout << "AFTER TRANSPOSING:-" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}