#include <iostream>
using namespace std;
int main()

{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT IN THE ARRAY: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j]==0) // swap
            {
                int temp;
                temp = arr[j];
                arr[j ] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if (flag == true)
            break; // swap didnt occur to bass brreak maaro
    }
    cout << endl
         << "THE SORTED ARRAY IS: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// time complexity is O(n)
// and this is proper BUBBLESORT
// bubblesot