#include <iostream>
using namespace std;
int main()
{
    int arr[2][4];
    cout << "ENTER THE ROLL AND MARKS:-";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "THE ENTERED ROLL AND MARKS ARE : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}