#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT INT THE ARRAY: ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ELEMENTS OF ARRAY: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "ELEMENTS OF ARRAY ARE: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    vector<int> v(n, 0);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int mindex = -1;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == 1)
                continue;
            else
            {
                if (min > arr[j])
                {
                    int min = arr[j];
                    mindex = j;
                }
            }
        }
        arr[mindex] = x;
        v[mindex]=1;
        x++;
    }
    cout << "REQUIRED ANSWER: ";
    cout << "ELEMENTS OF ARRAY ARE: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}