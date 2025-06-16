#include <iostream>
#include <climits>
// #include<algorithm>
// #include<math.h>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE LENGTH OF ARRAY: ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ELEMENT OF THE ARRAY: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int ele : arr) // for each loop
    {
        cout << ele << " ";
    }
    cout << endl;
    // insertion sort
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j >= 1)
        {
            if (arr[j] >= arr[j - 1])
                break;
            else
            {

                swap(arr[j], arr[j - 1]);
                j--;
            }
        }
    }
    cout << "SORTED ELEMENT: ";
    for (int ele : arr) // for each loop
    {
        cout << ele << " ";
    }
    // stable sorting algorithm
}