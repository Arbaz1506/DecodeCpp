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
    for (int i = 0; i < n - 1; i++) // n-1 passes this is the total passes
    {
        for (int j = 0; j < n - 1; j++) // why j is traverse till n-1?cox we never see the last element coz last element k baad kisi se compare to karna nahii haii hmlog ko
        {
            if (arr[j] > arr[j + 1]) // swap
            {
                int temp;
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << endl
         << "THE SORTED ARRAY IS: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
