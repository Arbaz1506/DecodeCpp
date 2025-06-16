#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ROWS :";
    cin >> n;
    for (int i = 1; i<= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j;
            
            
        }
        cout << endl;
    }
}
