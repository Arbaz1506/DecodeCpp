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
        for (int j = 0; j < n - 1 - i; j++) // why j is traverse till n-1-i?this is the optimsed way coz harr ek iteration me last row check kro nhii kro baat barabr hoo jayega
        // also the time complexity does not changes here
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
