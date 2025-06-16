#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF STUDENT:-" << endl;
    cin >> n;
    int arr[n];
    cout << "ENTER THE NUMBER OF ELEMENT:-" << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    cout << "ROLL OFF STUDENT WITH LESS MARKS:-" << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] < 35)
        {
            cout << i << endl;
            ;
        }
    }
}