#include <iostream>
using namespace std;

int binary(int arr[], int target, int size)
{

    int hi = (size - 1);
    int lo = 0;
   
    while (lo <= hi)
    {
         int mid = (hi + lo) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
            hi = mid - 1;
        else
            lo= mid + 1;
    }
    //  cout<<"element not found in the array :(";
    return -1;
}
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT IN THE ARRRAY:  ";
    cin >> n;
    int arr[n];
    cout << "ENTER  THE ELEMENT OF THE ARRAY IN ASCENDING ORDER: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // int x = sizeof(arr) / sizeof(arr[0]);
    int tar;
    cout << endl;
    cout << "ENTER THE TARGET TO BE SEARCHED: ";
    cin >> tar;

    int result = binary(arr, tar, n);
    if (result != -1)
    {
        cout << "ELEMENT FOUND IN THE INDEX " << result;
    }
    else cout<<"ELEMENT NOT FOUND ";
}